int f(int m,int n)
{
 int i,a[300];
 int k=n;
    for(i=0;i<n;i++){
  a[i]=0;
 }
 int j=1;
 for(i=0;i<n;i=(i+1)%n){
  if(a[i]){
   continue;
  }
  if(j++==m){
   a[i]=1;
   k--;
   j=1;
  }
  if(k==0){
   return i+1;
      break;
  }
 }
 
}
int main()
{
 int m,n,i,a[1000],num=0;
 for(i=0;;i++){
	  if(m==0&&n==0){
		 break;
	 }
	 scanf("%d%d",&n,&m);
	 if(m==0&&n==0){
		 break;
	 }
	 a[i]=f(m,n);
	 num++;
 }
 for(i=0;i<num;i++){
	 printf("%d\n",a[i]);
 }
 return 0;
}
	 