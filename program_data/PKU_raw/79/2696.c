int yuesefu(int a[],int sum,int k)
{
	int i,j,count;
	for(count=0,i=0,j=0;count<sum-1;)
	{
		if(a[i]!=0)
			j++;
		if(j==k)
		{
			a[i]=0;
			count++;
			j=0;
		}
		i++;
		if(i==sum)
			i=0;
	}
	for(i=0;i<sum;i++)
	{
		if(a[i]!=0)
			break;
	}
	return a[i];
}
void ascanf (int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
		a[i]=i+1;
}
int main ()
{
	int a[100][300],p[100][2];
	int i,j,num=0;
	for (i=0;i<100;i++)
	{
		scanf ("%d%d",&p[i][0],&p[i][1]);
		num++;
		if(p[i][0]==0&&p[i][1]==0)
			break;
	}
	for(i=0;i<num;i++)
		ascanf(a[i],p[i][0]);
	for(i=0;i<num-1;i++)
	{
		printf("%d\n",yuesefu(a[i],p[i][0],p[i][1]));
	}

	return 0;
}

