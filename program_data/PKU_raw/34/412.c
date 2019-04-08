int main()
{
    int n,i,a;
	scanf("%d",&n);
	
	for(i=1;;i++){
        if(n==1){
		   printf("End\n");
           break;
		}
	  if(n%2==0){
		a=n/2;
		printf("%d/2=%d\n",n,a);
	    if(a==1){
		  printf("End\n");
		  break;
		}
	    else{
		  n=a;
		}
	  }
	   if(n%2!=0){
		  a=n*3+1;
		  printf("%d*3+1=%d\n",n,a);
		if(a==1){
		  printf("End\n");
		  break;
		}
		else{
		n=a;
		}
	  }
	}
	return 0;
}
