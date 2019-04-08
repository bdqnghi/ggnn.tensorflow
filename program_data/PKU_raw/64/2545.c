int main()
{
    int i,j,n,x[10],y[10],z[10],xc,yc,zc,k=0,x1s[55],y1s[55],z1s[55],x2s[55],y2s[55],z2s[55];
	double e,s[55];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		scanf("%d",&y[i]);
		scanf("%d",&z[i]);
	}
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			xc=x[i]-x[j];
			yc=y[i]-y[j];
			zc=z[i]-z[j];
			s[k]=sqrt(xc*xc+yc*yc+zc*zc);
			x1s[k]=x[i]; x2s[k]=x[j];
			y1s[k]=y[i]; y2s[k]=y[j];
			z1s[k]=z[i]; z2s[k]=z[j];
			k++;
		}
	for(j=n*(n-1)/2-1;j>0;j--)
		for(i=0;i<j;i++)
			if(s[i]<s[i+1])
			{
				e=s[i];  s[i]=s[i+1];  s[i+1]=e;
				e=x1s[i];  x1s[i]=x1s[i+1];  x1s[i+1]=e;
				e=y1s[i];  y1s[i]=y1s[i+1];  y1s[i+1]=e;
				e=z1s[i];  z1s[i]=z1s[i+1];  z1s[i+1]=e;
				e=x2s[i];  x2s[i]=x2s[i+1];  x2s[i+1]=e;
				e=y2s[i];  y2s[i]=y2s[i+1];  y2s[i+1]=e;
				e=z2s[i];  z2s[i]=z2s[i+1];  z2s[i+1]=e;
			}
	for(k=0;k<n*(n-1)/2;k++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x1s[k],y1s[k],z1s[k],x2s[k],y2s[k],z2s[k],s[k]);
    return 0;
}


