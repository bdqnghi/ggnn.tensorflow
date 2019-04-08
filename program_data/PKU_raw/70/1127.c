// ????.cpp : ??????????????
//


int main()
{
	int m,n,i,j,l;
	double a[LEN][2],b[LEN],c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	  scanf("%lf%lf",&a[i][0],&a[i][1]);
	}
	l=n*(n-1)/2;
	m=0;
	for(i=0;i<n-1;i++)
	{
	  for(j=i+1;j<n;j++)
	  {
	    b[m]=(a[j][0]-a[i][0])*(a[j][0]-a[i][0])+(a[j][1]-a[i][1])*(a[j][1]-a[i][1]);
		b[m]=sqrt(b[m]);
		m++;
	  }
	}
	c=b[0];
	for(i=1;i<l;i++)
	{
	  if(b[i]>c)
	  {
	    c=b[i];
	  }
	}
	printf("%.4lf",c);
	return 0;
}

