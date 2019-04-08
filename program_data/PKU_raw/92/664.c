int main ()
{
	int a[1001] ,b[1001],m,n,i,j,k,o,p;
	for(;;)
	{
	scanf("%d",&n);
	if(n==0) break;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	   for(j=0;j<n-1;j++)
	  {
	   if (b[j]>b[j+1])
	     {k=b[j];b[j]=b[j+1];b[j+1]=k;}
	   if (a[j]>a[j+1])
	     {k=a[j];a[j]=a[j+1];a[j+1]=k;}
      }
      k=0;
      o=0;m=0;p=0;
	for(i=0;i+p<n;)
	{
          if(a[i]>b[o]){k++;o++;i++;continue;}
          if(a[i]<b[o]){k--;i++;m++;continue;}
          if(a[n-p-1]>b[n-m-1]&&a[i]==b[o]){k++;p++;m++;continue;}
          if(a[n-p-1]<b[n-m-1]&&a[i]==b[o]){k--;i++;m++;continue;}
          if(a[n-p-1]==b[n-m-1]&&a[i]==b[o]){if(a[i]<b[n-m-1]) k--;i++;m++;continue;}
          } 
	printf("%d\n",200*k);	
	}
}


