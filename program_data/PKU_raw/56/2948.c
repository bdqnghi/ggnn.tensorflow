int main()
{
	int n,a[5],i,j,sum=0,b;
	scanf("%d",&n);
	a[0]=n/10000;
	a[1]=n/1000-10*a[0];
	a[2]=n/100-10*a[1]-100*a[0];
	a[3]=n/10-10*a[2]-100*a[1]-1000*a[0];
	a[4]=n-10*a[3]-100*a[2]-1000*a[1]-10000*a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]!=0)
		{
			j=i;
			break;
		}
	}
	for(i=4;i>=j;i--)
	{
		b=(int)pow(10,(i-j));
		sum+=a[i]*b;
	}
	printf("%d",sum);
	return 0;
}






