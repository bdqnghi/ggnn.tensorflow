void main()
{
	int n,i,a[400],k,c[400],l;
	float m,j=0,b[400];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		j=j+a[i];
	}
	j=j/(float)n;
	//printf("%.2f",j);
	for(i=0;i<n;i++)
		if((a[i]-j)>=0)
			b[i]=(a[i]-j);
		else
			b[i]=(j-a[i]);
	for(i=1,m=b[0];i<n;i++)
		if(m<b[i])
			m=b[i];
	for(i=0,k=0;i<n;i++)
		if(b[i]==m)
			c[k++]=a[i];
	for(i=0;i<k;i++)
		for(l=0;l<k-i-1;l++)
			if(c[l]>c[l+1])
			{
				n=c[l];
				c[l]=c[l+1];
				c[l+1]=n;
			}
	for(i=0;i<k;i++)
		if(i==0)
			printf("%d",c[i]);
		else
			printf(",%d",c[i]);
}