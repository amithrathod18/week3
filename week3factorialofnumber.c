#include<stdio.h>
int main(){
      int i,n;
      long long s=1;
	  printf("enter n\n");
	  scanf("%d",&n);
	  
	  for(i=1;i<=n;i++){
	  	s=s*i;
	  }
	  	printf("%d",s);
		      return 0;
}

