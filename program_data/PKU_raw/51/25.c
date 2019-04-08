int main()
{
	char str[501];
	int i,j,n,k,p=1,x=0,a[400];
		for(i=0;i<400;i++)
			a[i]=1;
    scanf("%d",&n);
	scanf("%s",str);
	int len=strlen(str);
    for(i=0;i<len-n;i++)
	{
		for(j=i+1;j<len;j++)
		{
			int p=i;int t=j;int flag=1;
			for(k=0;k<n;k++)
			{
				if(str[t]!=str[p])
				{flag=0;break;}
				p++;t++;
			}
			if(flag==1)
				a[x]=a[x]+1;
		}
		x++;
	}
	for(i=0;i<x-2;i++)
	{if(a[i]!=1) p=0;}
	if(p==1)
		printf("NO");
	else
	{
		int max=0;
		for(i=1;i<x;i++)
		{
			if(a[i]>a[max])
				max=i;
		}
           printf("%d\n",a[max]);
		for(i=max;i<x-1;i++)
		{
			if(a[i]==a[max])
			{
				for(j=i;j<=i+n-1;j++)
				{printf("%c",str[j]);}
				printf("\n");
			}
		}
	}
	return 0;
}
