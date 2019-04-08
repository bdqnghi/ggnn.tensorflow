int main()
{
	int a=0,b=0,c=0,m,n,i,p;
	scanf("%d",&p);
	for (i=1;i<=p;i++)
	{
		scanf("%d%d",&m,&n);
		if(m==n){c++;}else
		{
			if((n==m+1)||((n==0)&&(m==2))){a++;}else
			{
				b++;
			}
		}
	}
	if(a==b){printf("Tie");}else
		{
			if(a>b){printf("A");}else
			{printf("B");}
		}

    return 0;
}