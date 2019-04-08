int main()
{
	int n,i,x,y;
	scanf("%d",&n);
	if(n>1)
	{
	  do{
		if(n%2==1)
		{
			x=0;
			x=3*n+1;
			printf("%d*3+1=%d\n",n,x);
			n=x;
		}
		else if(n%2==0)
		{
			y=0;
			y=n/2;
			printf("%d/2=%d\n",n,y);
			n=y;
		}
	}while(n>1);
	printf("End");
	}
	else if(n=1)
	{
	printf("End");
	}
	return 0;
}

