int main(){
	int ans=0,i=0,a[100]={1},b[100]={1},c[100]={1},d[100]={1},e[100]={1},f[100]={1};
scanf("%d%d%d%d%d%d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
ans=(d[0]+12)*3600+e[0]*60+f[0]-(a[0]*3600+b[0]*60+c[0]);
 printf("%d\n",ans);
 while(a[i]!=0){
  i=i+1;
  scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
  ans=(d[i]+12)*3600+e[i]*60+f[i]-(a[i]*3600+b[i]*60+c[i]);
  if(a[i]!=0){
	  printf("%d\n",ans);}
 }
   return 0;
}