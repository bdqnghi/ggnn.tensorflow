void main()
{
	int x,y,a[11]={2},b[11]={3},i=0,j=0,t,n=0,k;
	scanf("%d%d",&x,&y);
	while(x>0)
	{
		a[i+1]=x%2;
		x=(x-x%2)/2;
		i++;
	}
	while(y>0)
	{
		b[j+1]=y%2;
		y=(y-y%2)/2;
		j++;
	}
	t=i;
	while(a[i]==b[j])
	{
		i--;
		j--;
	}
	for(k=t;k>=i+1;k--)
		n=n*2+a[k];
	printf("%d",n);
}