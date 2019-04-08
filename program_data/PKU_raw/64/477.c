int main()
{	
	int n,i,j,k=0,x[10],y[10],z[10],a[90],b[90];//n:??,i,j,k=0,?????x[10],y[10],z[10]????x?y?z??,a[90],b[90]?????????
	double l[90],p;//l[90]:???p:?????????
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			l[k]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			a[k]=i;
			b[k]=j;
			k++;
		}

	for(i=1;i<k;i++)
		for(j=0;j<k-i;j++)
		{
			if(l[j]<l[j+1])
			{
				p=l[j];
				l[j]=l[j+1];
				l[j+1]=p;
				p=a[j];
				a[j]=a[j+1];
				a[j+1]=p;
				p=b[j];
				b[j]=b[j+1];
				b[j+1]=p;
			}	
		}
	for(i=0;i<k;i++)
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[a[i]],y[a[i]],z[a[i]],x[b[i]],y[b[i]],z[b[i]],l[i]);
	return 0;
}