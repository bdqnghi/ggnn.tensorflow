int main()
{
	int n,i,j,k,h,a[10],c[10],y;
	float b[10],sum=0,GPA,p=0;
    scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{ 
        scanf("%d\n",&c[i]);
	}
	for (j=0;j<n;j++)
	{
		scanf("%d\n",&a[j]);
	}
	for(k=0;k<n;k++)
	{
        if(a[k]>=90&&a[k]<=100)
		{
			b[k]=4.0;
		}
		else if(a[k]>=85&&a[k]<=89)
		{
			b[k]=3.7;
		}
		else if(a[k]>=82&&a[k]<=84)
		{
			b[k]=3.3;
		}
		else if(a[k]>=78&&a[k]<=81)
		{
			b[k]=3.0;
		}
		else if(a[k]>=75&&a[k]<=77)
		{
			b[k]=2.7;
		}
		else if(a[k]>=72&&a[k]<=74)
		{
			b[k]=2.3;
		}
		else if(a[k]>=68&&a[k]<=71)
		{
			b[k]=2.0;
		}
		else if(a[k]>=64&&a[k]<=67)
		{
			b[k]=1.5;
		}
		else if(a[k]>=60&&a[k]<=63)
		{
			b[k]=1.0;
		}
		else {
			b[k]=0;
		}
	}
	for(h=0;h<n;h++)
	{
		sum=sum+b[h]*c[h];
	}
	for(y=0;y<n;y++)
	{
		p+=c[y];
	}
    GPA=sum/p;
	printf("%.2f",GPA);
}

