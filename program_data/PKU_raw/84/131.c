void main()
{
 int a[100];
 long n;
 int i,j,t;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(j=0;j<n-1;j++)
	 for(i=0;i<n-1-j;i++)
		 if(a[i]>a[i+1])
		 {
			 t=a[i];
			 a[i]=a[i+1];
			 a[i+1]=t;
		 }
		 for(i=n-1;i>n-3;i--)
			 printf("%d\n",a[i]);
}
  