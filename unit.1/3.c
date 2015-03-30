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
linklist *tmp1 = mylist->next;
linklist *tmp2 = mylist;

while(temp->next->data) {
	tmp1 = tmp1->next;
	tmp2 = tmp->next;
	tmp->next = tmp;
	tmp = tmp2;
}

