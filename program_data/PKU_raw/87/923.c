int main (){
 int a[100],b[100],c[100],d[100],e[100],f[100],m[100],i;
 for(i=0;i<100;i++){
  scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
  m[i]=(d[i]*3600+e[i]*60+f[i])+(12-a[i])*3600-b[i]*60-c[i];
  if(m[i]==12*3600){break;}
  printf("%d\n",m[i]);}
return 0;
}