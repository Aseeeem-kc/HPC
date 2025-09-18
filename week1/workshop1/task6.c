#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *threadFunc(void *p) {
    int threadNum = *((int *)p);
    for (int i = 0; i < 10; i++) {
        printf("Thread %d: i=%d\n", threadNum, i);
        fflush(stdout);
        usleep(1000);
    }
    free(p);
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number_of_threads>\n", argv[0]);
        return 1;
    }

    int n = 0;
    for (char *c = argv[1]; *c != '\0'; c++) {
        n = n * 10 + (*c - '0');
    }

    pthread_t *threads = malloc(n * sizeof(pthread_t));

    for (int i = 0; i < n; i++) {
        int *threadNum = malloc(sizeof(int));
        *threadNum = i + 1;
        pthread_create(&threads[i], NULL, threadFunc, threadNum);
    }

    for (int i = 0; i < n; i++) {
        pthread_join(threads[i], NULL);
    }

    free(threads);
    return 0;
}
