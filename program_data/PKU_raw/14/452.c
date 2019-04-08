int main()
{
 int n,i,j,p,q,t;
 int a[100000][3];
 scanf("%d",&n);
 for(i=0;i<n;i++){
	 for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
   a[i][1]=a[i][1]+a[i][2];
 }
 for(p=0;p<3;p++){
  for(q=n-2;q>=0;q--){
   if(a[q][1]<a[q+1][1]){
    for(i=0;i<2;i++){
    t=a[q][i];
    a[q][i]=a[q+1][i];
    a[q+1][i]=t;
    }
   }
  }
 }
	  for(i=0;i<3;i++){
  printf("%d %d\n",a[i][0],a[i][1]);
 }
 return 0;
}
  