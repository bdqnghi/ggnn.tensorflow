void main()
{
    int reverse(int num);
    int num,i;
    for(i=0;i<6;i=i+1)
    {
	scanf("%d",&num);
	num=reverse(num);
	printf("%d\n",num);
    }
}

int reverse(int num)
{
    int a[5];
    int n,i,t,sign=1;
    if(num==0)
	return(num);
    else
    {
    if(num<0)
    sign=-1;
    num=num*sign;
    n=log10(num);
    for(i=0;i<=n;i=i+1)
    {
	a[i]=num/pow(10,n-i);
	num=num-a[i]*pow(10,n-i);
    }
    for(i=0;i<n/2+1;i=i+1)
    {
	t=a[i];
	a[i]=a[n-i];
	a[n-i]=t;
    }
    for(i=0;i<=
    n;i=i+1)
    {
	num=num+a[i]*pow(10,n-i);
    }
    num=num*sign;
    return num;
    }
}