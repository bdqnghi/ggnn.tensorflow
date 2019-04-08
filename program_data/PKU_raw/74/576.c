
int PrimeQ(int n);

int main()
{
	int i, j, min, max, temp, count, flag=0, num[15], result[100];
	scanf("%d %d", &min, &max);
	for(i=min; i<=max; i++)
	{
		if(PrimeQ(i)==1)
		{
			temp=i;
			for(j=0; temp!=0; j++)
			{
				num[j]=temp-temp/10*10;
				temp/=10;
			}
			temp=j-1;
			count=0;
			for(j=0; j<(temp+1)/2; j++)
			{
				if(num[j]!=num[temp-j])
				{
					count=1;
					break;
				}
			}
			if(count==0)
			{
				result[flag]=i;
				flag++;
			}
		}
	}
	if(flag==0) printf("no\n");
	else for(i=0; i<flag; i++)
	{
		printf("%d", result[i]);
		if(i!=flag-1) printf(",");
		else printf("\n");
	}
	return 0;
}

int PrimeQ(int n)
{
	int i;
	for(i=2; i<=(double)sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	if(i!=n+1) return 1;
	return 0;
}