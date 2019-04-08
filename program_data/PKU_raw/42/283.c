int main()
{
int n,i,m,k; 
int a[100000];
scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  scanf("%d",&m);

  for(i=n-1;i>=0;i--)
   {
     if(a[i]==m)
	 {
		 for(k=i;k<n;k++) 
			{
			a[k]=a[k+1];
			
			} 
		n=n-1;
	 }
         
	}
	 
  for(i=0;i<n;i++)
  {
	  if(i<n-1)

           printf("%d ",a[i]);
	else printf("%d",a[i]);
 
    } 

  return 0;
  
}
