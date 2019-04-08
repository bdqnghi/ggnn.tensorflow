int main()
{
	int k,i,n,t,o,p,q=0;
	int x[100],y[100],z[100],one[100],two[100];
	double e,sz[100];
	scanf("%d",&n);
     for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	 for(i=0;i<n-1;i++)
	 {
		 for(p=i+1;p<n;p++)
		 {
             sz[q]=sqrt((x[i]-x[p])*(x[i]-x[p])+(y[i]-y[p])*(y[i]-y[p])+(z[i]-z[p])*(z[i]-z[p]));
			 one[q]=i;two[q]=p;
             q++;
		 }
	 }
     	for(k=1;k<q+1;k++)
	{
		for(i=0;i<q-k;i++)
		{
			if(sz[i]<sz[i+1])
			{
				e=sz[i+1];t=one[i+1];o=two[i+1];
				sz[i+1]=sz[i];one[i+1]=one[i];two[i+1]=two[i];
				sz[i]=e;one[i]=t;two[i]=o;
			}
		}
	}
		for(i=0;i<q;i++)
		{
			printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[(one[i])],y[(one[i])],z[(one[i])],x[(two[i])],y[(two[i])],z[(two[i])],sz[i]);
		}
	return 0;
}