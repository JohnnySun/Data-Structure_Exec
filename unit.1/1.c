/* No function call,
 * No include,
 * No Main,
 * Just core.
 */

/* Variable init */
char *a;
int i;

/* malloc */
a = (char *)malloc(sizeof(char) * lenth);
/* lasted node to NULL */
a[lenth -1] = NULL;

for(i = 0; i < lenth; i++) {
	if(a[i] ==  x) {
		for(i++; i<lenth; i++) {
			a[i-1] = a[i];
		}
		a[lenth-2] = NULL;
		break;
	}
}
