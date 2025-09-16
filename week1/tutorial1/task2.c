#include <stdio.h>



void findprime(int s, int e){
	int counter = 1;
	for (int i =s; i<=e;i++){
		for (int k = 1;k<=s; k++){
				if (i % k == 0){
					counter++;
				}
		} 
		if (counter == 2){
			printf("%d\n", i);
		}
		counter = 1;
	}
}
int main(){
	findprime(50, 100);
	return 0;
}

