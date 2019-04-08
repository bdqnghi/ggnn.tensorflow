int Isprime(int k);
int Ishuiwen(int k);

int main()
{
	int m,n,i,t;
	int a[100];
	scanf("%d%d",&m,&n);


    t=0;
	for(i=m;i<=n;i++)
	{
		if(Isprime(i))
		{
			if(Ishuiwen(i))
			{
				a[t]=i;
				t++;
			}
		}
	}


	if(t==0)
		printf("no\n");
	else
	{
		printf("%d",a[0]);
		for(i=1;i<t;i++)
			printf(",%d",a[i]);
		printf("\n");
	}

	return 0;
}



int Isprime(int k)
{
	int j;
	for(j=2;j<k;j++)
	{
		if(k%j==0)
			return 0;
	}
	return 1;
}

int Ishuiwen(int k)
{
	int j,p,q,sum,temp;
	j=0;
	temp=k;
	while(temp>0)//why not k/pow(10,j)>0//
	{
		j++;
		temp=temp/10;
	}

	p=j;

	q=k;
	sum=0;
	while(k/(pow(10,j))<k)
	{
		sum=sum+(q%10)*(int)pow(10,(j-1));
		q=q/10;
		j--;
	}


	if(sum==k)
		return 1;
	else
		return 0;
}
