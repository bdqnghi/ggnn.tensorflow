int n,k;
int sum(int x)
{
	int i=0,c,num,j,a[100];
	if(x==1)
    {
		for(i=1;;i++)
		{
			num=0;
			a[1]=i*n+k;
			for(j=1;j<n;j++)
			{
			   if(a[j]%(n-1)!=0)
			    num++;
               a[j+1]=a[j]*n/(n-1)+k;
			}
			     if(num==0)
				 {
			   c=i*n+k;
               break;
				 }
		}
	}
	else
		c=sum(x-1)*n/(n-1)+k;
	return c;
}
void main()
{
	scanf("%d%d",&n,&k);
	printf("%d",sum(n));
}