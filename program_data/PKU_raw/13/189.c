int main()
{
 int a[20000];
 int i,j,k,x;
 scanf("%d",&x);
 for(i=0;i<x;i++)
	 scanf("%d",&a[i]);
 for(i=0;i<x;i++)
 {
  for(j=i+1;j<x;j++)
  {
   if(a[i]==a[j])
   {
	   x--;
    for(k=j;k<x;k++)
     a[k]=a[k+1];
    j--;
   }
  }
 }
 for(i=0;i<x-1;i++)printf("%d ",a[i]);
 if(i<x)printf("%d",a[i]);
 return 0;
}