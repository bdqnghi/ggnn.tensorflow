void main()
{
	int m;
	scanf("%d",&m);
	if(m==1) printf("End");
	else 
	{
		do
	{
		int n;
		 if(m%2!=0)
		 {
			 n=m*3+1;
			 printf("%d*3+1=%d",m,n);
			 printf("\n");
			 m=n;
		 }
		 if(m%2==0)
		 {
			 n=m/2;
			 printf("%d/2=%d",m,n);
             printf("\n");
			 m=n;
		 }

	}while(m>1);
		
	printf("End");}
}