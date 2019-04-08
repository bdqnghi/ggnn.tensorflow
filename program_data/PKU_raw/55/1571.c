int main()
{
	int a,b,m,i,k,j;
	unsigned long long int sum;
	char z1[200]={'\0'}, z2[200]={'\0'};
	scanf("%d %s %d",&a,z1,&b);
	k=strlen(z1);
	for(sum=0,i=0;i<k;i++)
	{
		if(z1[i]>='0'&&z1[i]<='9')
		{
			m=z1[i]-'0';
		}
		else if(z1[i]>='a'&&z1[i]<='z')
		{
			m=z1[i]-'a'+10;
		}
		else
		{
			m=z1[i]-'A'+10;
		}

		sum=sum+((unsigned long long int)pow(1.0*a,1.0*(k-i-1)))*m;
		
	}
	for(i=0;sum>0;i++)
	{
		if(sum%b<=9)
		{
			z2[i]=sum%b+'0';
		}
		else
		{
			z2[i]=sum%b-10+'A';
		}
		sum=sum/b;
	}
	for(j=strlen(z2)-1;j>=0;j--)
	{
		printf("%c",z2[j]);
	}
	if(z1[0]=='0')
	{
		printf("0");
	}
	return 0;
}