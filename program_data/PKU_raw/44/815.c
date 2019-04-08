int reverse(int num)
{
	int i=0,a[100],j,s=0;
	if(num==0) return(0);
	else
	{
		while(num>0)
		{
			a[i++]=num%10;
		    num=num/10;
		}
		for(j=0;j<i;j++)
			s=s+a[j]*pow(10,i-1-j);
		return(s);
	}
}
int main()
{
	int i,a[6];
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0) a[i]=reverse(a[i]);
		else a[i]=-reverse(-a[i]);
	}
	for(i=0;i<6;i++)
		printf("%d\n",a[i]);
	return 0;
}
