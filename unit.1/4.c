/*
 * No function call,
 * No include,
 * No Main,
 * Just core.
 */

typedef struct list {
	char *data;
	char *next;
} linklist;
/* 
 * data need to be use malloc to init
 * and use strcmp to compare.
 */

linklist *mylist;
/* 
 * Miss the action to create and init the list,
 * make the point mylist as the start of the list,
 * and data equ to NULL, The end of the list->next = NULL
 */
linklist *tmp = mylist;
linklist *tmp1 = mylist;
linklist *tmp2 = NULL;

/* Search for data == x */
while(tmp) {
	tmp1 = tmp;
	while(tmp1->next) {
		if(strcmp(tmp1->next->data, tmp->data)) {
			tmp2 = tmp1->next;
			tmp1->next = temp->next->next;
			free(tmp2);
			/* Do not forget to free unuse node. */
		}
		tmp1 = tmp1->next;
	}
	tmp = tmp->next;
}



