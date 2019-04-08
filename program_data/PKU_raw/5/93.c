
int main()
{
	char fir[1000];
	char sec[1000];
	double l1,l2;
	int i,j,k;
	int flag=0;
	double m=0,x,n;
	
	scanf("%lf",&n);



	
	scanf("%s",&fir);
	scanf("%s",&sec);
	l1=strlen(fir);
	l2=strlen(sec);

	for(i=0;i<l1;i++)
	{
		if(fir[i]!='A'&&fir[i]!='T'&&fir[i]!='C'&&fir[i]!='G')
		{
			flag++;
		}
	}
	for(i=0;i<l2;i++)
	{
		if(sec[i]!='A'&&sec[i]!='G'&&sec[i]!='C'&&sec[i]!='T')
		{
			flag++;
		}
	}
	if(l1!=l2)
	{
		flag++;
	}

	if(flag>0)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(fir[i]==sec[i])
			{
				m++;
			}
		}
		x=m/l1;
		if(x>n)
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