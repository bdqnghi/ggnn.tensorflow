void paixu(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{	t=a[i];	a[i]=a[j];	a[j]=t;	}
		}
	}
}

int find(int a[],int n)
{
	int gole;
	int i,max=a[0];
	if(n==1)	return -1;
	else if(a[0]==a[n-1])	return -1;
	else
	{
		for(i=0;i<n;i++)
			if(a[i]<max)	
				break;
		return a[i];
	}
}

int main()
{
	int a[310]={0},n=0;
	int num=0;
	char c;
	while((c=getchar())!='\n')
	{
		if(c==',')
		{
			a[n++]=num;
			num=0;
		}
		else
			num=num*10+c-'0';
	}
	a[n++]=num;
	paixu(a,n);
	if(find(a,n)==-1)	printf("No\n");
	else
		printf("%d\n",find(a,n));

	return 0;
}



