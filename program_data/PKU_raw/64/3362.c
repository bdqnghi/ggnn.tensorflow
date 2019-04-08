int main()
{
	int x[10],y[10],z[10],x1[45],y1[45],z1[45],x2[45],y2[45],z2[45],n,m,i,j,k,l,h;
	double s[45],e;
	scanf("%d",&n);
	m=n*(n-1)/2;
	for(i=0;i<n;i++)
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	l=0;
	for(j=0;j<n-1;j++){
		for(k=j+1;k<n;k++){
            x1[l]=x[j];y1[l]=y[j];z1[l]=z[j];
			x2[l]=x[k];y2[l]=y[k];z2[l]=z[k];
			s[l]=sqrt((x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k])+(z[j]-z[k])*(z[j]-z[k]));
			l++;
		}

	}
	for(j=1;j<=m;j++){
		for(k=0;k<m-j;k++){
			if(s[k]<s[k+1]){
				e=s[k];s[k]=s[k+1];s[k+1]=e;
				h=x1[k];x1[k]=x1[k+1];x1[k+1]=h;
				h=y1[k];y1[k]=y1[k+1];y1[k+1]=h;
				h=z1[k];z1[k]=z1[k+1];z1[k+1]=h;
				h=x2[k];x2[k]=x2[k+1];x2[k+1]=h;
				h=y2[k];y2[k]=y2[k+1];y2[k+1]=h;
				h=z2[k];z2[k]=z2[k+1];z2[k+1]=h;
			}
		}
	}
	for(i=0;i<m;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x1[i],y1[i],z1[i],x2[i],y2[i],z2[i],s[i]);
	return 0;
}