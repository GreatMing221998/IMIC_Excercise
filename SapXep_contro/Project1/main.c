#include <stdio.h>
#include "sapXep.h"
int main(){
	int arr[] = { 1, 4, 0, 2, 3, -2, 6, -7, 5, 9};
	char n = sizeof(arr) / sizeof(int);
	sapXep(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", *(arr+i));
	}
	return 0;
}
