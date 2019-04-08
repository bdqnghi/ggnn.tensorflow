
char calapp(int a[],int p,int n,int k)
{
	int i;
	a[n]=p*n+k;
	for(i=n-1;i>=1;i--)
	{
		if(a[i+1]%(n-1)==0)
			a[i]=a[i+1]*n/(n-1)+k;
		else
			return(1);
	}
	return(0);
}


void main()
{
	int app[N],p;
	char flag;
	int n,k;
	scanf("%d%d",&n,&k);

	p=1;//original 
	do		//calculate a[n]----a[1]
	{
		flag=calapp(app,p,n,k);
		if(flag)
			p++;
	}while(flag);//flag:1:"fail" so should go on

	printf("%d\n",app[1]);


}


