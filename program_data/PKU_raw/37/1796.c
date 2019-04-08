int main()
{
	int t,k,x,i,j,s[100000],y;
	char a[100000];
	scanf ("%d",&t);
	for (k=1;k<=t;k++)
	{
		scanf("%s",a);
		x=strlen(a);
		y=0;
		for (i=0;i<x;i++)
		{
			s[i]=0;
		}
		for (i=0;i<x;i++)
		{
			for (j=0;j<x;j++)
			{
				if(a[i]==a[j]) s[i]=s[i]+1;
			}
		}
		for (i=0;i<x;i++)
		{
			if (s[i]==1) 
			{
				printf("%c\n",a[i]);
				y=1;
				break;
			}
		}
		if (y==0) printf("no\n");
	}
}
