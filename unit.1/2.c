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
linklist *tmp = mylist->next;
linklist *tmp1 = mylist;

/* Search for data == x */
while(temp->next) {
	if(strcmp(temp->data, 'x')) {
		tmp1->next = node_e;
		node_e->next = tmp;
	}
	tmp1 = tmp;
	tmp = tmp->next;
}



