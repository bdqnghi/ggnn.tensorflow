


int main()
{
	int n,i=0,j=0,e=0,m=-1,q=-1;
	double a[100],b[100],c[100],t,g,f,r,v,s,o;
	double d[100],p[100]={0},w[100]={0},k[100]={0},z[100]={0},l[100]={0},u[100]={0};
	cin>>n;
	for(i=0;i<n;i++)
	   cin>>a[i]>>b[i]>>c[i];
	for(i=0;i<n*(n-1)/2;i++)
		d[i]=0;
	e=0;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			{d[e]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
	          p[e]=a[i];
			  w[e]=a[j];
			   u[e]=b[i];
			  l[e]=b[j];
			  k[e]=c[i];
			  z[e]=c[j];
	         e++;
	}
	for(i=0;i<(n*(n-1)/2)-1;i++)
		for(j=0;j<(n*(n-1)/2)-i-1;j++)
		{	
			if(d[j]<d[j+1])
				{t=d[j];
	            d[j]=d[j+1];
				d[j+1]=t;
			   g=p[j];
	            p[j]=p[j+1];
				p[j+1]=g;
			   f=w[j];
	            w[j]=w[j+1];
				w[j+1]=f;
			   r=u[j];
	            u[j]=u[j+1];
				u[j+1]=r;
			   v=l[j];
	           l[j]=l[j+1];
				l[j+1]=v;
			   s=k[j];
	            k[j]=k[j+1];
				k[j+1]=s;
			  o=z[j];
	            z[j]=z[j+1];
				z[j+1]=o;}
		}
			for(i=0;i<(n*(n-1)/2);i++)
			{cout<<"("<<p[i]<<","<<u[i]<<","<<k[i]<<")"<<"-"<<"("<<w[i]<<","<<l[i]<<","<<z[i]<<")"<<"=";
			printf("%.2f\n",d[i]);
			
			}
		}
	