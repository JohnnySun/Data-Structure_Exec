#include <stdio.h>
#include <stdlib.h>

#define MAX_NUMBER 100

typedef struct list {
	int index;
	int power;
	struct list *next;
} list;

list *init_list() {
	int i;
	list *s = (list *)malloc(sizeof(list));
	s->index = NULL;
	s->power = NULL;
	list *a = s;
	for(i = 0; 1; i++) {
		int index, power;
		char stop;
		printf("Please input index:");
		scanf("%d",&index);
		printf("Please input power:");
		scanf("%d",&power);
		printf("Input 's' to stop");
		scanf("%c",&stop);
		if(stop == 's') {
			break;
		}
		list *p = (list *)malloc(sizeof(list));
		p->index = index;
		p->power = power;
		a->next = p;
		a = a->next;
	}
	a->next = NULL; 
	return s;
}

list *loop(list *s) {
	list *a = s;
	list *loop = s;
	while(!a->next) {
		while(!loop->next) {
			list *tmp = loop;
			loop = loop->next;
			if(a->power == loop->power) {
				a->index = loop->index;
			}
			tmp->next = loop->next;
		}
		a = a->next;
	}
	return 0;
}

int main(int argc, char **argv) {
	int m = 10;
	list *s = init_list();
	s = loop(s);
	free(s);
	return 0;
}

