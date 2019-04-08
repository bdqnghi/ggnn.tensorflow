int main()
{
	int n,sz[100],i=0,a[100],b[100],p=0,q=0,m=0;
	char sz1[100][100],a1[100][100],b1[100][100],e[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s%d",sz1[i],&sz[i]);
	for(i=0;i<n;i++)
	{
		if(sz[i]>=60)
		{
			a[p]=sz[i];
			strcpy(a1[p],sz1[i]);
			p++;
		}
		if(sz[i]<60)
		{
			b[q]=sz[i];
			strcpy(b1[q],sz1[i]);
			q++;
		}
	}
	for(i=1;i<p;i++)
	{
		for(m=0;m<p-i;m++)
		{
			if(a[m]<a[m+1])
			{
				int t = a[m];
				a[m] = a[m+1];
				a[m+1] = t;
				strcpy(e,a1[m]);
				strcpy(a1[m],a1[m+1]);
				strcpy(a1[m+1],e);
			}
		}
	}
	for(i=0;i<p;i++)
		printf("%s\n",a1[i]);
	for(m=0;m<q;m++)
		printf("%s\n",(b1[m]));


	return 0;
}

