int main()
{
    int n,x[20],y[20],z[20]={0},ju[200],xx[200],yy[200],zz[200]={0},xxx[200],yyy[200],zzz[200]={0};
	int i,j,k=0,m;
	double l[200];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			ju[k]=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
			l[k]=sqrt(ju[k]);
			xx[k]=x[i];xxx[k]=x[j];yy[k]=y[i];yyy[k]=y[j];zz[k]=z[i];zzz[k]=z[j];
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-1;j++)
		{
			if(l[j]<l[j+1])
			{
				double t=l[j+1];l[j+1]=l[j];l[j]=t;
		    m=xx[j+1];xx[j+1]=xx[j];xx[j]=m;
            m=yy[j+1];yy[j+1]=yy[j];yy[j]=m;
			m=zz[j+1];zz[j+1]=zz[j];zz[j]=m;
			m=xxx[j+1];xxx[j+1]=xxx[j];xxx[j]=m;
			m=yyy[j+1];yyy[j+1]=yyy[j];yyy[j]=m;
			m=zzz[j+1];zzz[j+1]=zzz[j];zzz[j]=m;
			}
			else continue;
		}
	}
	for(i=0;i<k;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", xx[i], yy[i], zz[i], xxx[i], yyy[i], zzz[i], l[i]);
	}
	return 0;
}