int judge_zhi(int a)
{
	int i;
	if(a!=2&&a%2==1)
	{
	for(i=2;i<=sqrt(a)+1;i++)
	{
		if(a%i==0)
		{
			return(0);
		     break;
		}
	}
	if(i>=sqrt(a)+1) return(1);
	}
	if(a==2) return(1);
	if(a>2&&a%2==0) return(0);
}

void main()
{
	int n,i,j,m;
	scanf("%d",&m);
	for(n=6;n<=m;n++)
	{
	     if(n%2==1) continue;
		for(i=2;i<n;i++)
		{
		if(judge_zhi(i)==1&&judge_zhi(n-i)==1)
		{
			printf("%d=%d+%d\n",n,i,n-i);
	         break;
		}
		
		}
	}
}


	