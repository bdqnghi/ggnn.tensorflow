void main()
{
 int i,j,m=0,n,a[100000],k,*p;
 p=a;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",p+i);
 scanf("%d",&k);
 for(i=0;i<n-m;i++)
 {
  if(*(p+i)==k) 
  {for(j=i+1;j<n-m+1;j++) *(p+j-1)=*(p+j);
   m++;i--;
  }
 }
  for(i=0;i<n-m-1;i++)
  printf("%d ",*(p+i));
  printf("%d",*(p+i));
}  
