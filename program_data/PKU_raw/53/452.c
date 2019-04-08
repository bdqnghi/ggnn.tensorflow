
void main()
{
    int n,i,j,m,k;
    int a[100];
    scanf("%d",&n);
    for (i=1;i<=n;i++)
	{ scanf("%d",&a[i]);}
    for (i=1;i<=n;i++)
	{
	   for (j=i+1;j<=n;j++)
	   {
         if (a[i]==a[j])
		 {a[j]=-10000;}

	   }
	
	
	}
for (i=1;i<=n;i++)
	{
       if (a[i]!=-10000)
	   {
	      printf("%d",a[i]);
		  m=0;
		  k=i;
	   }
	   if (m==0) break;
}

for (i=k+1;i<=n;i++)
	{
       if (a[i]!=-10000)
	   {
	      printf(",%d",a[i]);
	   }
}

}

