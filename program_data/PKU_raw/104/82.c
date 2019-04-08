void main()
{
	int m,n,i,j,k,a[100],b[100],c[100];
	scanf("%d %d",&m,&n);
		a[0]=m;
		for(i=0;a[i]>=1;i++)
		{
			if(a[i]%2==0)
			a[i+1]=a[i]/2;
			if(a[i]%2==1)
				a[i+1]=(a[i]-1)/2;
		}
		b[0]=n;
		for(j=0;b[j]>=1;j++)
				{
					if(b[j]%2==0)
					b[j+1]=b[j]/2;
					if(b[j]%2==1)
						b[j+1]=(b[j]-1)/2;
				}
		for(i=0;a[i]>=1;i++)
		{
			for(j=0;b[j]>=1;j++)
			{
				if(b[j]==a[i])
				{
					k=a[i];
					break;
				}
			}
			if(k==a[i])
			break;
			
		}
		printf("%d",k);
}