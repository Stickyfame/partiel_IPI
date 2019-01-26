#include<stdio.h>

/* Q1 */
/* requires */
void swap (int *a, int *b) {
	int 	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* Q2 */
struct couple {
		double first;
		double second;
};
/* requires */
void swap_couple(struct couple *c) {
	double 	temp;

	temp = c->first;
	c->first = c->second;
	c->second = temp;
}

/* Q3 */
/* requires tab est de taille size (au moins)*/
int *copy_tab(int *tab, int size) {
	int 	*ret;
	int 	i;

	ret = (int *) malloc(size*sizeof(int));
	for  (i=0 ; i<size ; i=i+1) {
		ret[i]=tab[i];
	}
	return(ret);
}

/* Q4 */
/* requires */
char *copy_str(char *str) {
	char 	*ret;
	int 	size;
	int 	i;

	i = 0;
	while (str[i] != '\0') {
		i=i+1;
	}
	size = i;
	ret = (char *) malloc(size*sizeof(char));
	i = 0;
	while (str[i]) {
		ret[i] = str[i];
		i=i+1;
	}
}
