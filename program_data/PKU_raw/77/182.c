int main()
{
	char a[10000];
	int k,n=0;
	for(k=0;k<10000;k++)
	{
		scanf("%c",&a[k]);
		if(a[k]==' ')
			break;
		n+=1;
	}
	for(k=1;k<n;k++)
	{
		if(a[k]==a[0])
			continue;
		int m=1,i;
		for(i=k-1;i>=0;i--)
		{
			if(a[i]!=a[0])
				m+=1;
			if(a[i]==a[0])
				m-=1;
			if(m==0)
			{
				printf("%d %d\n",i,k);
				break;
			}
		}
	}
	return 0;
}