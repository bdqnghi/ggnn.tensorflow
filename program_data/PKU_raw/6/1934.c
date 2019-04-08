int A[100][100];
int main()
{
	int *pt;
	int i,j,k;
	int m,n;
	int *re;
	int B[200];
	int number;
	scanf("%d",&number);
	re=B;
	for(i=0;i<200;i++)
	{
		*(re+i)=0;
	}
	re=B;
	for(i=0;i<number;i++)
	{
		for(j=0;j<100;j++)
		{
			for(k=0;k<100;k++)
			{
				*(*(A+j)+k)=0;
			}
		}
		
		scanf("%d%d",&m,&n);
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				scanf("%d",*(A+j)+k);
			}
		}
		pt=*A;
		for(j=0;j<n;j++)
		{
			if(j<(n-1))
			{
			*re=*re + *pt;
			pt++;
			}
			else
			{
				*re=*re + *pt;
				pt=pt+100;
			}
		}
		for(j=1;j<m;j++)
		{
			if(j<(m-1))
			{
			*re=*re + *pt;
			pt=pt+100;
			}
			else
			{
				*re=*re + *pt;
				pt=pt-1;
			}
		}
		for(j=1;j<n;j++)
		{
			if(j<(n-1))
			{
			*re=*re + *pt;
			pt--;
			}
			else
			{
				*re=*re + *pt;
				pt=pt-100;
			}
		}
		for(j=1;j<(m-1);j++)
		{
			*re=*re+ *pt;
			pt=pt-100;
		}
		re++;
	}
	re=B;
	for(i=0;i<number;i++)
	{
		printf("%d\n",*(re+i));

	}
	return 0;
}