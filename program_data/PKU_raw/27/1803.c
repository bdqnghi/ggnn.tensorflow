void main()
{
	double k,t,m,l;
	int h,n;
	double u[32768],v[32768],w[32768],e[32768],f[32768],g[32768];
	scanf("%d",&n);
		h=1;
	    while(h<=n)
		{
			scanf("%lf %lf %lf",&u[h],&v[h],&w[h]);
				k=v[h]*v[h]-4*u[h]*w[h];
				t=-k;
			if(k>0)
			{
				e[h]=-v[h]/(2*u[h]);
			    f[h]=sqrt(k)/(2*u[h]);
				g[h]=0;
			}
			else if(k<0)
			{
				e[h]=-v[h]/(2*u[h]);
			    f[h]=sqrt(t)/(2*u[h]);
				g[h]=1;
			}
			else 
			{
				e[h]=-v[h]/(2*u[h]);
				f[h]=0;
				g[h]=2;
			}
			h++;
		}
		h=1;
		while(h<=n)
		{
	            m=e[h]+f[h];
		    l=e[h]-f[h];
			if(fabs(m)<1e-6)
				m=0;
			if(fabs(l)<1e-6)
				l=0;
                        if(fabs(e[h])<1e-6)
				e[h]=0;
			if(fabs(f[h])<1e-6)
				f[h]=0;
			if(g[h]==0)
				printf("x1=%.5f;x2=%.5f\n",m,l);
			if(g[h]==1)
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",e[h],f[h],e[h],f[h]);
			if(g[h]==2)
				printf("x1=x2=%.5f\n",m);
			h++;
		}
}
