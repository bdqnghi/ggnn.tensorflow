
int main(int argc, char* argv[])
{
	int n,i,j,m,t=0,x=0;
	int s[7];
	scanf("%d",&n);
	m=n;

	while(m>0)
	{
	    m=m/10;
	    t++;
	}

	for(i=t;i>=1;i--)
	{
		s[i]=(int)n/pow(10,i-1);
		n=n-(int)s[i]*pow(10,i-1);
	}




	for(i=1;i<=t;i++)
	{
		x=x+s[i]*pow(10,t-i);
	}

printf("%d\n",x);

	return 0;
}
