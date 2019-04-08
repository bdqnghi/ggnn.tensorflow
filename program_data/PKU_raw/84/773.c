int main()
{
	int a[100],max,imax,i,n,temp;
	scanf("%d/n",&n);
	for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
  max=0;
  for (i=0;i<n;i++)
{
  if(a[max]<a[i])
  {
	  max=i;
      //a[0]=a[i];  
  }
 }

  //
  temp=a[0];
  a[0]=a[max];
  a[max]=temp;

imax=a[1];
  for(i=1;i<n;i++)
  {
   if(imax<a[i])
   {
  imax=a[i];
   }
  }
printf("%d\n%d",a[0],imax);
	return 0;
}