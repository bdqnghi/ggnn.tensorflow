int input(int a[],int b[],int c[])
{
	int m=0;
	int small,big;
	char cd;
	scanf("%d",&a[m]);
	small=a[m];
	while((cd=getchar())!='\n')
	{
		m=m+1;
		scanf("%d",&a[m]);
		if(a[m]<small)
			small=a[m];
	}
	m=0;
	scanf("%d",&b[m]);
	big=b[m];
	while((cd=getchar())!='\n')
	{
		m=m+1;
		scanf("%d",&b[m]);
		if(b[m]>big)
			big=b[m];
	}
	c[0]=small;
	c[1]=big;
	return (m+1);
}

void count(int a[],int b[],int d[],int r)
{
	int i;int j;
	for(i=0;i<r;i++)
		for(j=a[i];j<b[i];j++)
			d[j]++;
	
}
int maxi(int c[],int d[])
{
	int i;
	int max=d[c[0]];
	for(i=c[0]+1;i<c[1];i++)
	{
		if(d[i]>max)
			max=d[i];
	}
	return max;


}
void main()
{
	int a[N],b[N];
	int d[1001]={0};
	int c[2];
	int i=0;
	int r,max;
	r=input(a,b,c);
	count(a,b,d,r);
	max=maxi(c,d);
	printf("%d %d",r,max);
	

}