float abss(float m)
{
	if(m<0)
		return(-m);
	else return(m);
}
void main()
{
	int n,i,j,m;
	float ave=0,max=0,num[301],t[300],te;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&num[i]);
		ave+=num[i];
	}
	ave/=n;
	for(i=1;i<=n;i++)
	{
		if(abss(num[i]-ave)>max)
			max=abss(num[i]-ave);
	}
	for(i=1,j=0;i<=n;i++)
	{
		if(abss(num[i]-ave)==max)
		{
			j++;
			t[j]=num[i];
		}
	}
	m=j;
	for(i=1;i<m;i++)
		for(j=1;j<m-i;j++)
			if(t[j]>t[j+1])
			{
				te=t[j];
				t[j]=t[j+1];
				t[j+1]=te;
			}
	for(i=1;i<=m;i++)
		printf((i==1)?"%.0f":",%.0f",t[i]);
}