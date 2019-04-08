int main()
{
  int n,i,max=0,emax=0;
  int a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
 if(a[i]>max){
   max=a[i];
  }
  }
  for(i=0;i<n;i++){
    if(a[i]!=max){
         if(a[i]>emax){
             emax=a[i];
           }
       }
    }
 printf("%d\n%d\n",max,emax);
 return 0;
} 
  
   