
int max(int a[],int n)
{
	int z,i,j,t,temp,r;
	int b[25];
	if(n==1)z=1;
	else if(n==0)z=0;
	else 
	{
		for(i=0,r=0;i<n;i++)
	{
		for(j=i+1,t=0;j<n;j++)
			if(a[j]<=a[i])
			{
				b[t]=a[j];
				t++;
			}
		temp=max(b,t)+1;
		if(temp>r)r=temp;
	}
	z=r;
	}
	return z;
}

int main()
{
	int k,t,i;
	int bomb[25];
	scanf("%d\n",&k);
	for(i=0;i<k;i++)scanf("%d",&bomb[i]);
	t=max(bomb,k);
	printf("%d\n",t);
}