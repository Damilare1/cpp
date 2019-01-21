#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int i, j, temp;
	int array[5] = {9,11,12,4,3};

	for(i=0;i<5;i++){
		for(j=0; j<5-i-1; j++){
			if(array[j] > array[j+1] ){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;

			}
		}
		cout<< array[j];

	}

}
