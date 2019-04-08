int isprime(int n);
void Goldbach(int m);
int main()
{
int m;
scanf("%d",&m);
Goldbach(m);
return 0;
}

int isprime(int n)
{
	int i,j;
	if(n==2)
	{
		return 1;
	}
	else if(n==1)
	{
		return 0;
	}
	else
	{
		for(i=2,j=0;i<=(int)sqrt(n);i++)
		{
			if(n%i==0)
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if(j!=(int)sqrt(n)-1)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

void Goldbach(int m)
{
	int i,j;
	for(i=6;i<=m;i++)
	{
		if(i%2==0)
		{
			for(j=3;j<=i;j++)
			{
				if((isprime(j)==1)&&(isprime(i-j)==1))
				{
					printf("%d=%d+%d\n",i,j,i-j);
					break;
				}
			}
		}
	}
}


