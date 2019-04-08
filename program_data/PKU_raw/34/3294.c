void main()
{
 int n;
 void cal(int n);
 scanf("%d",&n);
 if(n==1) printf("End");
 else {cal(n);printf("End");}
}
void cal(int n)
{
	
	while(n!=1)
	{
		if(n%2==0)
		{
			printf("%d/2=%d\n",n,n/2);
		    n=n/2;
        }
		else
		{
            printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
}