int main()
{
	int n,i,t,j,m,k;
	float a[10],b[10],c[10];
    float d[10][10];
	int e[10][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f %f",&a[i],&b[i],&c[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			d[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
			e[i][j]=1;
		}
	}
	for(t=1;t<300;t++)
	{
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			 if(e[i][j]==0)
				 continue;
			 for(m=0;m<n-1;m++)
			 {
				 for(k=m+1;k<n;k++)
				 {
					 if(d[i][j]<d[m][k]&&e[m][k]!=0)
						 break;
				 }
				 if(k<n)
					 break;
			 }
			 if(m==n-1)
			 {
				 printf("(%.0f,%.0f,%.0f)-(%.0f,%.0f,%.0f)=%.2f\n",a[i],b[i],c[i],a[j],b[j],c[j],d[i][j]);
			     e[i][j]=0;
				 break;
			 }
		}
        if(j<n)
			break;
	}
	}
	return 0;
}
