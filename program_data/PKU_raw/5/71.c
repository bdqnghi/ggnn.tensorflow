int main()
{
	int max=0,n,i,count=0,m,j,num[200],left,flag=0;
    char a[100],b[100];
	double s;
	scanf("%lf",&s);
	scanf("%s",&a);
	scanf("%s",&b);
	if(strlen(a)==strlen(b))
	{
		n=strlen(a);
	}
	else
	{
		flag=1;
		printf("error");
	}
	if(flag==0)
	{
	for(i=0;i<n;i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'))
		{
			flag=1;
			printf("error");
			break;
		}
		else
		{
			if(a[i]==b[i])
			{
				count++;
			}
		}
	}
	}
	if(flag==0)
	{
		if((double)count/n>s)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	}
	return 0;
}
