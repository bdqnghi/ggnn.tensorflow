int main ()
{
	int r,c,i,j,t,n;
	t=0;
	int a[100][100]={0};
	scanf("%d%d",&r,&c);


	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&(a[i][j]));
		}
	}

	int c0=c,r0=r;
	int i0=0,j0=0;

	while(1)
	{
		printf("%d",a[i0][j0]);
		t++;

		if(t==r*c)
		{
			break;
		}
		i=i0;
		for(j=j0+1;j<j0+c0;j++)
		{
			printf("\n%d",a[i][j]);
			t++;
		}
		if(t==r*c)
		{
			break;
		}
		r0--;
		j--;
		for(i=i+1;i<i0+r0+1;i++)
		{
			printf("\n%d",a[i][j]);
			t++;
		}

		if(t==r*c)
		{
			break;
		}
		c0--;
		i--;

		for(j=j-1;j>=j0;j--)
		{
			printf("\n%d",a[i][j]);
			t++;
		}

		if(t==r*c)
		{
			break;
		}
		r0--;
		j++;
		for(i=i-1;i>i0;i--)
		{
			printf("\n%d",a[i][j]);
			t++;
		}
		if(t==r*c)
		{
			break;
		}
		else
		{
			printf("\n");
		}
		c0--;
		i0=i+1;
		j0++;
	}
	return 0;
} 
