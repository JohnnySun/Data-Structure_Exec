#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 100

typedef struct list {
	int passwd;
	struct list *next;
} list;

list *init_list() {
	int i;
	list *s = (list *)malloc(sizeof(list));
	s->passwd = 0;
	list *a = s;
	for(i = 0; i < MAX_NUMBER; i++) {
		list *p = (list *)malloc(sizeof(list));
		p->passwd = random() % MAX_NUMBER +1;
		a->next = p;
		a = a->next;
	}
	a->next = s; 
	return s;
}

int loop(int m, list *s) {
	int num = MAX_NUMBER;
	int i;
	list *loop = s;
	list *tmp;
	while(num != 0) {
		for(i = 0; i < m - 1; i++) {
			tmp = loop;
			loop = loop->next;
		
		}
		if(loop->passwd != 0) {
			m = loop->passwd;
			tmp = loop->next;
			printf("person out, his passwd is:%d\n", m);
		}
		num--;
	}
	return 0;
}

int main(int argc, char **argv) {
	int m = 10;
	list *s = init_list();
	loop(m, s);
	free(s);
	return 0;
}

