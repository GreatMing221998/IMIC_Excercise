#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stringLen(char* msg) {
	int i = 0;
	while (*(msg+i)!=0){
		i++;
	}
	return i;
}

int position(char* msg, char* target) {
	int i = 0;
	for (i; i < stringLen(msg); i++) {
		int j = 0;
		for (j = 0; j < stringLen(target); j++) {
			if (msg[i + j] != target[j])
				break;
		}
		if (j >= stringLen(target))
			break;
	}
	return i+1;
}

char* DiaChi(char* msg, char* target) {
	char* d = msg + position(msg, target);
	return d;
}

char valueof(char* msg, char* target, char* val) {
	int i = 0;
	char* start = DiaChi(msg, target) + stringLen(target) + 2;
	while (*(start + i) != '\"') {
		*(val+i) = *(start + i);
		i++;
	}
	if (*(val + 1) != *("ON" + 1)) 
			return 0;
	return 1;
}

void main() {
	char msg[] = "{\r\n\"Motor\":\"OFF\",\r\n\"Fan\":\"OFF\",\r\n\"TV\":\"ON\"\r\n}";
	char* target = "Motor";
	char val[8] = { 0 };
	printf("Vi tri cua %s: %d\r\n",target, position(msg, target));
	if (valueof(msg, target, val) == 1) {
		printf("ON");
	}
	else {
		printf("OFF");
	}
}