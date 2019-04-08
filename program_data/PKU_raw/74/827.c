
int main()
{
    int m,n,i,k,j,t,r,a[20],b[100],l;
	scanf("%d%d",&m,&n);
	l=1;
	for (i=m;i<=n;i++)
	{
		for (k=2;k<=i;k++)
			if (i%k==0) break;
		if (k==i) 
		{
			for (k=1;k<=10;k++)
			{
				a[k]=(int)(i/pow(10,k-1))-(int)(i/pow(10,k))*10;
	        	if ((int)(i/pow(10,k))==0) break;
			}
			j=1;
			t=1;
			for (r=k;r>=k/2+1;r--)
			{
				if (a[r]==a[j]) t=t*1;
				if (a[r]-a[j]) t=0;
				j=j+1;
			}
			if (t==1) 
            {
                      b[l]=i;
                      l=l+1;
            }
		}

	}

	if (l==1) printf("no");
	else
	{
    printf("%d",b[1]);
	for (i=2;i<l;i++)
	printf(",%d",b[i]);
    }
	return 0;
}