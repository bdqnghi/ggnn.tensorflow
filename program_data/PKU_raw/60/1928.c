int main()
{
	int n,q=0;
	int judge(int x);
	scanf("%d",&n);
	for(int i=3;i<=n-2;i+=2)
		if (judge(i)&&judge(i+2))
		    {
			printf("%d %d",i,i+2);
			q=1;
			printf("\n");	
			}	
	if(q==0)
	   printf("empty");
}
int judge(int x)
{
	int p=1;
	for(int i=2;i<=sqrt((double)x);i++)
	    if(x%i==0)
	       {
		   p=0;
		   break;		
		   }
	if(p==1)
	   return 1;
	else
	   return 0;
}