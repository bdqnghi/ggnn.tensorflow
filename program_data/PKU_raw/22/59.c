
/*void arrange(int a[],int n);*/
/*int judges(int x);*/
int choose(int a[300],int n);

void main()
{
	int n,i,a[300],temp;
	for (i=0;i<300;i++)
		a[i]=-1;
	scanf("%d",&a[0]);
	i=1;
	while(scanf(",%d",&a[i])!=EOF&&i<300)
	{
		i++;
	}
	for (i=0;a[i]!=-1;i++);
	n=i;
	temp=choose(a,n);
	for (i=0;i<n;i++)
	{
		if(a[i]==temp)
			a[i]=-1;
	}
	temp=choose(a,n);
	if (temp!=-1)
		printf("%d\n",temp);
	else
		printf("No\n");
}

/*void arrange(int a[],int n)
{
	int i,j,t;
	for (i=n-1;i>0;i--)
	{
		for (j=0;j<i;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}from small to big */

/*int judges(int x)
{
	int i,temp;
	temp=1;
	for (i=2;i<(x/2+1);i++)
	{
		if(x%i==0)
			temp=0;
	}
	return(temp);
}panduansushu,1shi,0bushi*/

int choose(int a[300],int n)
{
	int i,temp;
	for (i=0,temp=-1;i<n;i++)
	{
		if (a[i]>temp)
			temp=a[i];
	}
	return(temp);
}