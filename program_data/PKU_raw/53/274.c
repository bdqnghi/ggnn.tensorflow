void main()
{
 int a[300],n,i,c,d,j,k;
 scanf("%d",&n);
 d=n;
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 for(k=0;k<d;k++)
 {
	 for(j=k+1;j<d;)
	 {
	 if (a[k]==a[j])
	 {
		 for(c=j;c<d-1;c++)
		{
			a[c]=a[c+1];
		}
		d=d-1;
	 }
	 else j++;
	 }
if (k<d-1)
printf("%d,",a[k]);
else printf("%d",a[k]);
 }
}