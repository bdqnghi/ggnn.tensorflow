int main()
{
	int i,j,t,m,n,temp,k=-1;
	int *a;
	char *ans,c;
	scanf("%d",&t);
	getchar();
	ans=(char *)calloc(t,sizeof(char));
	a=(int *)calloc(26,sizeof(int));
    for(i=0;i<t;i++)
	{
		n=1;
		while((c=getchar())!='\n')
		{
			m=c-97;
			if(a[m]==0) a[m]=n;
			else a[m]=-1;
			n++;
		}
		temp=n;
		for(j=0;j<26;j++)
		{
			if(a[j]>0 && a[j]<temp)
			{
				temp=a[j];
			    a[j]=0;
				k=j;
			}
			else a[j]=0;
		}
		if(k==-1) ans[i]='*';
		else ans[i]=97+k;
		k=-1;
	}
	for(i=0;i<t;i++)
	{
		if(ans[i]!='*')	printf("%c\n",ans[i]);
		else printf("no\n");
	}
}