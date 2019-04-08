int max(int s[],int n)
{
	int i,d=0;
	for(i=0;i<n;i++)
	{
		if(s[i]>d)
			d=s[i];
	}
	return d;
}
void bl(int h[],int s[],int m)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		if(i==0)
			s[i]=1;
		else
		{
			s[i]=1;
			for(j=0;j<i;j++)
				if(h[j]>=h[i]&&(s[j]+1)>s[i])
				{
					s[i]=s[j]+1;
				}
		}
	}
}
void main()
{
	int r,i,n;
	scanf("%d",&n);
	int h[26],d[26]={0};
	for(i=0;i<n;i++)
		scanf("%d",&h[i]);
	bl(h,d,n);
	r=max(d,n);
	printf("%d",r);
}
