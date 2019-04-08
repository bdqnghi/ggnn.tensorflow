
char max(char a[],char i)
{
	char j,m=a[0];
	for(j=1;j<i;j++)
		if(m<a[j])
			m=a[j];
	return(m);
}

void main()
{
	int h[N]={0};
	char n,i,j;
	scanf("%d",&n);
	for(i=n;i>=1;i--)//nixu!!
		scanf("%d",&h[i]);//h[0]=0
	char mis[N]={0},temp[N]={0};
	mis[0]=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=i-1;j++)//the most that is below h[i]
		{
			if(h[i]>=h[j])
				temp[j]=mis[j]+1;
			else
				temp[j]=0;//
		}
		mis[i]=max(temp,i);
	}
	for(i=0;i<=n;i++)
		printf("%d ",mis[i]);
	printf("%d",max(mis,n+1));


}