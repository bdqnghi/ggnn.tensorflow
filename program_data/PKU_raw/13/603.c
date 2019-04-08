
void main()
{
 int n,i,a[20000],j,m=0,k;
 scanf("%d",&n);
 for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
 for(i=n-1;i>=0;i--)
	 for(k=i-1;k>=0;k--)
		 if(a[i]==a[k])
		 {m++;
		  for(j=i;j<=n-m;j++)
		  a[j]=a[j+1];}
printf("%d",a[0]);
		 for(i=1;i<n-m;i++)
		 printf(" %d",a[i]);

}