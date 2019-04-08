int main(){
  int x[100],y[100];
  int i,n,j;
  scanf("%d",&n);
  for(i=0,j=n-1;i<n;i++,j--)
   {scanf("%d",&x[i]);
    y[j]=x[i];}
  for(j=0;j<n-1;j++)
   {printf("%d ",y[j]);}
   printf("%d",y[n-1]);
   return 0;
}
