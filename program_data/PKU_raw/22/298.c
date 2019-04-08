void main()
{
   int i,n,j,k,t,s,a[1000];
   for(n=0;scanf("%d,",&a[n])!=EOF;n++);
    scanf("%d",&a[i]);
	 for(j=0;j<n-1;j++)
	 {
		 for(k=0;k<n-j-1;k++)
		 { 
			 if(a[k]<a[k+1])
			 {
				 t=a[k];
				 a[k]=a[k+1];
				 a[k+1]=t;
			 }
		 }
	 }
	 for(s=1;s<n;s++)
	 {
		 if(a[s]!=a[0]) break;

	 }
	 if(s==n||n==1) printf("No");
	   else  printf("%d",a[s]);
}
