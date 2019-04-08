
int main()
{
	int n,t,i;
	char d1[max+1], d2[max+1];
	double a,k=0.00,m;
	scanf("%lf",&a);
	scanf("%s",d1);
	scanf("%s",d2);
	n=strlen(d1);
	t=strlen(d2);
	if(n!=t)
	{
		printf("error");
		return 0;
	}
	for(i=0;i<t;i++)
	{		
	    if((d1[i]!='A')&&(d1[i]!='C')&&(d1[i]!='T')&&(d1[i]!='G'))
		{
			printf("error");
			return 0;
		}
		else if((d2[i]!='A')&&(d2[i]!='C')&&(d2[i]!='T')&&(d2[i]!='G'))
		{
			printf("error");
			return 0;
		}
		else
		{
			if(d1[i]==d2[i])
			{
				k++;
			}
		}
	}
	m=1.0*(k/n);
	if(m>a)
	{
		printf("yes");
	}
	else 
	{
		printf("no");
	}
	return 0;
}