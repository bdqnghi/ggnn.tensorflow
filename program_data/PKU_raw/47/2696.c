int main(){
     int shur[100],shu[100];
     int n,i;
     scanf("%d",&n);
      for(i=0;i<=n;i++){
scanf("%d",&shur[i]);
shu[n-i]=shur[i];
}
for(i=1;i<=n;i++){
if(i==n){printf("%d",shu[i]);break;}
printf("%d ",shu[i]);
}
return 0;
}
