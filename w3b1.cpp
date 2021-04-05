#include<stdio.h>
int main() {
	int a,b,c,max;
	printf("xin moi nhap ba so bat ki\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	max = a;
	if (b>max)
	      max = b;
	if (c>max)
	      max = c;
	printf("so lon nhat la: %d", max);
	
	return 0;
}	
