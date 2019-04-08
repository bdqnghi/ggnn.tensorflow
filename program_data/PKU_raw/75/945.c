int fan(int);
void main()
{
	int a[10000],b[10000],c[10000]={0},n,m=0,i=0,j;
	do
	{
		scanf("%d",&a[i++]);
	}while(getchar()!='\n');
	i=0;
	do
	{
		scanf("%d",&b[i++]);
	}while(getchar()!='\n');
	printf("%d ",i);
	for(j=0;j<i;j++)
		if(m<b[j])
			m=b[j];//m-1?????????
	for(j=0;j<m;j++)//???????
	{
		for(n=0;n<i;n++)//??????
			if(j>=a[n]&&j<b[n])
				c[j]++;
	}
	for(i=1,n=c[0];i<m;i++)
		if(n<c[i])
			n=c[i];
	printf("%d",n);
}