#include<stdio.h>
int main(){
	int n,s=0;
	printf("enter number n\n");
	scanf("%d",&n);
	
	while(n!=0){
		s++;
		n=n/10;
    }
    s=(s==0)?1:s;
	printf("%d",s);

return 0;
}
