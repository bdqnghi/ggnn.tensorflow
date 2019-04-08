int main ()
{
	long b,c,i,j,d=0,z[100],sum=0,k;
	char a[100],s[36];
	for (i=0;i<36;i++)
	{
		if(i>=0&&i<=9)
			s[i]=i+48;
		else
			s[i]=i+55;
	}
	scanf ("%d %s %d",&b,a,&c);
	d=strlen(a);
		for (i=0;i<d;i++)
	{
		if (a[i]<123&&a[i]>96)
			a[i]=a[i]-32;
	}
	for (i=0;i<d;i++)
	{
		for(j=0;j<36;j++)
		{
			if (a[i]==s[j])
				sum=sum+j*pow(b,d-1-i);
		}
	}
	for (i=0;i>=0;i++)
	{
		if (sum==0)
		{
			k=i;
			break;
		}
		else
		{
			z[i]=sum%c;
			sum=sum/c;
		}
	}
	for(i=k-1;i>=0;i--)
		printf("%c",s[z[i]]);
	if (a[0]=='0')
		printf("%c",a[0]);
	return 0;
}