void main()
{
	int x,y;
	int i,j,k;
	int a[100],b[100];

	scanf("%d %d",&x,&y);
	for(i=0;x>0;i++)
	{
		a[i]=x;
		x=x/2;
	}
	i=i-1;
	for(j=0;y>0;j++)
	{
		b[j]=y;
		y=y/2;
	}
	j=j-1;
	for(k=0;k<=i&&k<=j;k++)
	{if(a[i-k]!=b[j-k])
	break;}
	if(a[i-k]!=b[j-k])
		printf("%d",a[i-k+1]);
	else if(k==i+1)
		printf("%d",a[0]);
	else if(k==j+1)
		printf("%d",b[0]);




}
