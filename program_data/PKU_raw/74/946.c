void main()
{
	int m,n,j,i,k=0,h,d,x,y,z;
	int a[2000],b[10];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			if(j==i-1)
			{
			    a[k]=i;
				k++;
			}
		}
	}
	for(i=0,z=0;i<=k-1;i++)
	{
		for(h=100000,d=1;d<=6;d++)
		{
			h=h/10;
			if(a[i]/h!=0)
				break;
		}
		for(j=0,x=1;j<=5-d;j++)
		{
			y=x;
			x=x*10;
			b[5-d-j]=(a[i]%x)/y;
		}
		for(j=0;j<=5-d;j++)
		{
			if(b[j]!=b[5-d-j])
				break;
			if(j==5-d)
			{z=z+1;
			if(z==1)printf("%d",a[i]);
			if(z>1)printf(",%d",a[i]);
			}
		}
	}
	if(z==0)printf("no");

	printf("\n");
}
