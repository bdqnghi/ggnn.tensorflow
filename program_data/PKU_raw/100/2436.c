void main()
{
	int i,j,l,sum,temp=0;
	char a[1000],b[1000];
	gets(a);
	l=strlen(a);
	j=65;
	while(j<=90||(j>=97&&j<=122))
	{
		sum=0;
		for(i=0;i<l;i++)
		{
			if(a[i]==j)
				sum=sum+1;
		}
		if(sum>0)
		{
			b[j]=j;
			printf("%c=%d\n",b[j],sum);
			temp=1;
		}
		j=j+1;
	}
	j=97;
	while(j>=97&&j<=122)
	{
		sum=0;
		for(i=0;i<l;i++)
		{
			if(a[i]==j)
				sum=sum+1;
		}
		if(sum>0)
		{
			b[j]=j;
			printf("%c=%d\n",b[j],sum);
			temp=1;
		}
		j=j+1;
	}
	if(temp==0)
		printf("No");
}


