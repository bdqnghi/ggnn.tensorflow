int main()
{int n,s,t,i;
 int a[10000],b[10000],c[10000],d[10000],e[10000],f[10000];
 for(i=0;i<10000;i++){
 scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
 if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
 n=i;
 break;}
 }
 for(i=0;i<n;i++){
 s=a[i]*60*60+b[i]*60+c[i];
 t=(d[i]+12)*60*60+e[i]*60+f[i];
 printf("%d\n",t-s);}
 return 0;
 }


