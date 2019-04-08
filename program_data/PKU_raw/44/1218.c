
int rev(int n)
{
	int digit[6],i,out=0,a;
	for(i=0;;i++)
	{
		digit[i]=n%10;
		n/=10;
		if(n==0) break;
	}
	a=i+1;
	for(i=0;i<a;i++)
	{
		out+=(digit[i]*pow(10,a-1-i));
	}
	return out;
}

int main( )
{
	int n,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&n);
		if(i!=0) printf("\n");
		printf("%d",rev(n));
	}
	return 0;
}