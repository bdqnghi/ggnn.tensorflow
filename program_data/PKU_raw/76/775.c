int main()
{
	int l[10001]={0};
	int n,i,j,a,b,ch=0,te=0,t=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		for (j=a;j<b;j++)
			l[j]=1;
	}
	a=0;
	b=0;
	for (j=0;j<10000;j++)
	{
		if(t==0)
			if (l[j]==1) 
			{
				if (l[j-1]==0) a=j;
			    b=j;
			}
			if ((l[j]==0)&&(l[j-1]==1)) t=1;
		if ((t==1)&&(l[j]==1)) 
		{
			printf("no");
			break;
		}
		ch=ch+1;
	}
	if (ch==10000) printf("%d %d",a,b+1);
}