void main()
{
 double n;
 int i,j;
 double sum=0.0;
 int flag=1;
 double average=0.0;
 int a[300]={0},c[300]={-1},d[300]={0};//a[]???????d[]????????????a[k]
 double b[300]={0.0};//b[]??????
 scanf("%lf",&n);

 for(i=0;i<n;i++)
 {
	 c[i]=i;//c[]????“??”
	 scanf("%d",a+i);
	 sum=sum+*(a+i);
 }
 average=sum/n;
 for(j=0;j<n;j++)
	 b[j]=fabs(a[j]-average);
 for(i=0;i<n;i++)
	 for(j=i+1;j<n;j++)
	 {
		 if(b[i]<b[j])
		 {
		  int t;
		  double p;
		  t=c[i];
		  c[i]=c[j];
		  c[j]=t;
		  p=b[i];
          b[i]=b[j];
		  b[j]=p;
		 }
	 }
 for(i=0;i<n;i++)
 {
  if(b[i]==b[i+1])
	  flag=flag+1;
  else
	  break;//??break???????????????i=n-1??????flag??????
 }
 if(flag==1)
	 printf("%d",a[c[0]]);
 else
 {
 
	 {
 
		 for(i=0;i<flag;i++)
	 
			 d[i]=a[c[i]];
 
	 }
 for(i=0;i<flag;i++)
	 for(j=i;j<flag;j++)
	 {
	  if(d[i]>d[j])
	  {
	   int t;
	   t=d[i];
	   d[i]=d[j];
	   d[j]=t;
	  }
	 }
 for(i=0;i<flag-1;i++)
     printf("%d,",d[i]);
 if(i==flag-1)
	 printf("%d",d[i]);
 }
}
