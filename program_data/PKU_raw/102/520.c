int main()
{
	int u,t,e,r,k,l,h=0,n,i,j,m=0;
	double s[41],sm[41],sf[41],tmp,tmpp;
    char z[41][7];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %lf",z[i],&s[i]);
	}
	for(j=0;j<n;j++)
	{
		if(z[j][0]=='m')
		{
			 sm[m]=s[j];
			 m++;
		}
		if(z[j][0]=='f')
		{
			sf[h]=s[j];
            h++;
		}
	}
	for(k=1;k<=m;k++)
	{
		for(l=0;l<m-k;l++)
		{
			if(sm[l]>sm[l+1])
			{
				tmp=sm[l+1];
				sm[l+1]=sm[l];
				sm[l]=tmp;
			}
		}
	}
	for(e=1;e<=h;e++)
	{
		for(r=0;r<h-e;r++)
		{
			if(sf[r]<sf[r+1])
			{
				tmpp=sf[r+1];
				sf[r+1]=sf[r];
				sf[r]=tmpp;
			}
		}
	}
    for(u=0;u<m;u++)
	{
		printf("%.2lf ",sm[u]);
	}
    for(t=0;t<h-1;t++)
	{
		printf("%.2lf ",sf[t]);
	}
	printf("%.2lf",sf[h-1]);
    return 0;
}
