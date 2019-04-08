void main()
{
	int a[10],b[100],i,j,n;
	scanf ("%d",&a[0]);
	for (i=1;i<10;i++) a[i]=a[i-1]/10; 
	for (i=0,n=0;i<10;i++) if (a[i]!=0) n=n+1;
	for (i=0,j=0;j<n;i++,j++) {b[j]=a[i]%10; printf("%d",b[j]);}
	
}