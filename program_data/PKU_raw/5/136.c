

int main()
{
	char a[1000],b[1000];
	double n;
	int i,j,k;
	double sum=0;
	scanf("%lf",&n);
	scanf("%s %s",a,b);
	if(strlen(a)!=strlen(b))
	{
		printf("error");
	}
	else 
	{
		for(i=0;i<strlen(a);i++)
		{
			if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
			{printf("error");
			return 0;}
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]==b[i])
			{
				sum+=1;
			}
		}
		if((sum/strlen(a))>n)
		{
			printf("yes");
		}
		else {
			printf("no");
		}
	}


	


	
	
	
	

	return 0;
}
