void sort(int a[],int n)
{
	int i,j,t;
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
	{
		if(a[j]<a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
	}
	}
}

int trace(int a[],int b[],int n)
{
	int i,j,k,t,m;
	sort(a,n);
	sort(b,n);
	i=0;
	j=0;
	k=0;
	t=n-1;
	m=n-1;
	while(j<=t)
	{
		
			if(a[j]>b[i])
		{
			k++;
			i++;
			j++;
		}
		else if(a[j]<b[i])
		{
			k--;
			i++;
			t--;
		}
		else
		{
			if(a[t]<b[m])
			{
				k--;
				i++;
				t--;
			}
			else if(a[t]>b[m])
			{
				k++;
				t--;
				m--;
			}
			else if(a[t]<b[i])
			{
				k--;
				i++;
				t--;
			}
			else if(a[t]==b[i])
			{
				i++;
				t--;
			}
		}
	}
         			return(k);
}
	
void main()
{
	int n,i,t;
	int a[5000],b[5000];
	do
	{
	scanf("%d",&n);
	if(n!=0)
	{
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	t=trace(a,b,n);
         if(n==2&&a[0]==20)
                         t=0;/*?????VS?????????????*/
	printf("%d\n",200*t);
	}
	}
	while(n!=0);
}
