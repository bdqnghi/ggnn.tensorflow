int main(){
  int a[100],b[100],c[100],d[100],e[100],f[100];
  int i,j,k,h,n;
  double s;
  i=0;
  while(1){
     scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
     if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&f[i]==0&&e[i]==0){
     break;
      }i++;
     }
   n=i;
 for(i=0;i<n;i++){
     d[i]=12+d[i];
     s=60*60*(d[i]-a[i])+60*(e[i]-b[i])+(f[i]-c[i]);
     printf("%.0lf\n",s);
    }
return 0;
}

