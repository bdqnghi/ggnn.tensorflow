int max(int a[100],int n,int m)
{
	int y,i;
	if(a[0]==m)  y=a[1];
    else y=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]==m)  continue;
		if(a[i]>y)   y=a[i];
	}
	return y;
}
int main()
{
	int a[100],n,i,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    m= max(a,n,0);
    printf("%d\n",m);
	m= max(a,n,m);
    printf("%d\n",m);
	return 0;
}
    


	
