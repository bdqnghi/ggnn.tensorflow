

int main()
{
	char a[82]={0}, b[82]={0};
	int i;
	gets(a);
	gets(b);
	for(i=0;i<82;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		if(b[i]>='a'&&b[i]<='z')
		{
			b[i]=b[i]-32;
		}
		if(a[i]<' ')a[i]=0;
		if(b[i]<' ')b[i]=0;
	}
	for(i=0;i<82;i++)
	{
		if(a[i]<b[i])
		{
			printf("<");
			break;
		}
		if(a[i]>b[i])
		{
			printf(">");
			break;
		}
	}
	
	if(i==82)
	{
		printf("=");
	}

	
	return 0;
}
