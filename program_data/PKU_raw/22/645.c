
void main()
{
	int a[300]={0},i,j,n,k,t;//n?????
	char tmp;
	for(i=0;i<300;i++)
	{
		scanf("%d%c",&a[i],&tmp);
		if(tmp=='\n') {n=i+1;break;}
	}
	for(i=0;i<n-1;i++)
		if(a[i]==a[i+1]);
		else break;
	if(i==n-1) printf("No\n");//??????????????
	else
	{
		for(i=0;i<n-1;i++)
		{
			k=i;
			for(j=i+1;j<n;j++)
				if(a[k]<a[j])
					k=j;
			if(k!=i)
			{
				t=a[k];
			    a[k]=a[i];
			    a[i]=t;
			}
		}//Select Sort
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1]);
			else break;
		}
		printf("%d\n",a[i+1]);
	}
}
