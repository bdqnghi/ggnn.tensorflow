int reverse(int n);

int main(int argc, char* argv[])
{
	int a[6],b[6];
	int i;

	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>=0)
		{
			b[i]=reverse(a[i]);
			printf("%d\n",b[i]);
		}
		else
		{
			b[i]=reverse(-a[i]);
			printf("%d\n",-b[i]);
		}
	}

	return 0;
}

int reverse(int n)
{
	int lenth=0,a,num=0;
	int i;
	int b,c,k;
	double d;
	
	a=n;
	while(a>=1)
	{
		a=a/10;
		lenth++;
	}
	k=0;
	for(i=lenth;i>0;i--)
	{
		
		b=n%(int)pow(10,i);
		c=n%(int)pow(10,(i-1));
		d=pow(10,(1-lenth+2*k));
		k++;
		num+=(b-c)*d;
	}

	return num;
}