void main()
{
	int n,i,j,a[300],sum=0,t1;
	double aver,b[300],t2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);sum+=a[i];
	}
	aver=(double)sum/n;
	 for(i=0;i<n;i++)
	 {
		 b[i]=fabs(a[i]-aver);
	 }
	 for(i=1;i<n;i++)
		 for(j=0;j<n-i;j++)
		 {
			 if(b[j]<b[j+1])
			 {
				 t2=b[j];
				 b[j]=b[j+1];
				 b[j+1]=t2;

				 t1=a[j];
				 a[j]=a[j+1];
				 a[j+1]=t1;
			 }
		 }
		 for(i=0;i<n;i++)
		 {   
			 if(b[i]==b[0])
			 {
				 printf("%d%c",a[i],(b[i+1]==b[i])?',':'\n');
			 }
		 }
}



