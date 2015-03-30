#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 100

static char person[MAX_NUMBER];
int loop;
int init_person() {
	for(loop = 0; loop <= MAX_NUMBER; loop++) {
		person[loop] = (random() % 100 + 1);
	}
	return 0;
}

int loop_person(int num, int m) {
	int n = 0;
	loop = 0;
	while(1) {
		if(person[loop]) {
			//fprintf(stdout, "n:%d, m:%d\n", n, m);
			if(n == m) {
				m = person[loop];
				fprintf(stdout, "person:%d, passwd:%d\n", loop, m);
				person[loop] ='\0';
				n = 0;
				num--;
			}
			n++;
			//printf("loop:%d\n", loop);
			if(loop == MAX_NUMBER - 1) {
				loop = 0;
			} else {
				loop++;
			}
		} else if(!person[loop]) {
			if(loop == MAX_NUMBER - 1) {
				loop = 0;
			} else {
				loop++;
			}
		}
		if(num == 0) {
			break;
		}
	}
	return 0;
}
	
int main(int argc, char **argv) {
	int num, m;
	m = 10;
	num = MAX_NUMBER;
	init_person();
	loop_person(num, m);
	return 0;
}

