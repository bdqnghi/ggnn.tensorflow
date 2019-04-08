void main()
{
	int a[101],aa[101],aaa[101];
	int b[101],bb[101],bbb[101];
	int c[101],cc[101],ccc[101];
	int i,j,k=0,n,t;
	double d [101];
	double t2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}


	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			d[k]=sqrt((a[i]-a[j+i+1])*(a[i]-a[j+i+1])+(b[i]-b[j+i+1])*(b[i]-b[j+i+1])+(c[i]-c[j+i+1])*(c[i]-c[j+i+1]));
		
			aa[k]=a[i];
			bb[k]=b[i];
			cc[k]=c[i];
			aaa[k]=a[j+i+1];
			bbb[k]=b[j+i+1]; 
			ccc[k]=c[j+i+1];
			k++;
		}
	}
	for (i=0;i<k;i++)
	{
		for (j=0;j<k-i-1;j++)
		{
			if (d[j]<d[j+1])
			{
				t2=d[j];
				d[j]=d[j+1];
				d[j+1]=t2;
				t=aa[j];
				aa[j]=aa[j+1];
				aa[j+1]=t;
				t=bb[j];
				bb[j]=bb[j+1];
				bb[j+1]=t;
				t=cc[j];
				cc[j]=cc[j+1];
				cc[j+1]=t;
				t=aaa[j];
				aaa[j]=aaa[j+1];
				aaa[j+1]=t;
				t=bbb[j];
				bbb[j]=bbb[j+1];
				bbb[j+1]=t;
				t=ccc[j];
				ccc[j]=ccc[j+1];
				ccc[j+1]=t;
			}
		}
	}
	for (i=0;i<k;i++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",aa[i],bb[i],cc[i],aaa[i],bbb[i],ccc[i],d[i]);
	}

}
