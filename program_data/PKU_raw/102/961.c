int main()
{
	int i,r,j=0,k=0,n;
	double a[41],b[41];
	char s[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		if(strlen(s)==4)
		{
			scanf("%lf",&a[j]);
			j++;
		}
		if(strlen(s)==6)
		{
			scanf("%lf",&b[k]);
			k++;
		}
	}
	for(i=j-1;i>0;i--)
	{
		for(r=0;r<i;r++)
		{
			if(a[r+1]<a[r])
			{
				double tmp;
				tmp=a[r+1];
				a[r+1]=a[r];
				a[r]=tmp;
			}
		}
	}
	for(i=0;i<k-1;i++)
	{
		for(r=k-1;r>0;r--)
		{
			if(b[r-1]<b[r])
			{
				double tmp;
				tmp=b[r-1];
				b[r-1]=b[r];
				b[r]=tmp;
			}
		}
	}
	r=0;
	for(i=j;i<=(j+k-1);i++)
	{
		a[i]=b[r];
		r++;
	}
    printf("%.2lf",a[0]);
	for(i=1;i<=(j+k-1);i++)
	{
		printf(" %.2lf",a[i]);
	}
	return 0;
}







	


	

     







