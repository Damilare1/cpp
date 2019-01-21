#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int i, j, temp;
	int array[5] = {3,2,4,6,5};

	for(i=0;i<5;i++){
		for(j=0; j<5-i-1; j++){
			if(array[j] > array[j+1] ){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;

			}
		}
		cout << "%d, %d, %d, %d, %d", array;
	}
}
