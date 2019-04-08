int main()
{
	char gender[10];
	float h[2][40]={0},t;

	int i,j,n,l=0,k=0;

	scanf("%d\n",&n);

	for(i=0;i<n;i++)
	{
		scanf("%s %f",gender,&t);

		if(strcmp(gender,"male")==0)
		{
			h[0][k]=t;
			k++;
		}
		else
		{
			h[1][l]=t;
			l++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(h[0][i]>h[0][j])
			{
				t=h[0][i];
				h[0][i]=h[0][j];
				h[0][j]=t;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		for(j=i;j<l;j++)
		{
			if(h[1][i]<h[1][j])
			{
				t=h[1][i];
				h[1][i]=h[1][j];
				h[1][j]=t;
			}
		}
	}

	for(i=0;i<k;i++)
	{
		if(i==0)
			printf("%.2f",h[0][i]);
		else
			printf(" %.2f",h[0][i]);
	}
	for(i=0;i<l;i++)
	{
		printf(" %.2f",h[1][i]);
	}
return 0;
}