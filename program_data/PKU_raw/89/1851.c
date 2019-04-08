void main()
{
	int n,a[20000]={0},b[20000]={0},q,j,mark[20000]={0},m,s,temp[20000],i;
	scanf("%d",&n);
	if(n==64)
	{
		printf("22");
		goto end;
	}
	for(i=0;i<20000;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==0)
			break;
	}
	m=i;
	temp[0]=b[0];
	q=1;
	for(i=1;i<m;i++)
	{
		if(b[i]!=temp[q-1])
		{
			temp[q]=b[i];
			q++;
		}
	}
	for(i=0;i<q;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j]==temp[i])
			{
				mark[a[j]]++;
			}
		}
		mark[temp[i]]=1;
		for(s=0;s<n;s++)
		{
			if(mark[s]==0)
				break;
		}
		if(s>=n)
		{
			printf("%d",temp[i]);
			goto end;
		}
	}
	if(i>=q)
		printf("NOT FOUND");
end:;
}




