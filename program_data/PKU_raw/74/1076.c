
void main()
{
	long int q,p;
	long int m,n,i,j,k=0,t,temp,flag=0;
	long int a[100],s[500];

	scanf("%ld%ld",&p,&q);

	for(m=p;m<=q;m++)
	{
		n=m;
		for(i=0;;i++)
		{
			if(n==0)
				break;
			else
			{
				a[i]=n%10;
				n=n/10;
			}

		}
		for(j=0;j<i;j++)
		{
			temp=0;
			if(a[j]!=a[i-j-1])
			{
				temp=1;
				break;
			}
		}

		if(temp==0)
		{
			s[k]=m;
			k++;
		}
	}
	temp=0;
	
	for(i=0;i<k;i++)
	{	
		for(j=2;j<sqrt(s[i])+1;j++)
		{
			if(s[i]%j==0)
			{
				temp=1;
				break;
			}
		}

		if(temp==0)
		{
			if(flag==0)
			{
				printf("%d",s[i]);
				flag++;
			}
			else
			{
				printf(",%d",s[i]);
				temp=1;
			}	
							
		}
		
		temp=0;

	}

	if(flag==0)
		printf("no");
	printf("\n");
}

