int main(){
  int zuo[10000],you[10000],n,i,j,a,b=0;
  double s;
  scanf("%d\n",&n);
  for(i=0;i<n;i++){
       scanf("%d %d\n",&zuo[i],&you[i]);
       if(b<you[i])b= you[i];
   }
   a=zuo[0];
   for(i=1;i<n;i++)
if(a>zuo[i])a=zuo[i];
   for(s=a+0.5;s<b;s++){
      for(j=0;j<n;j++){
         if(zuo[j]<s&&you[j]>s) break;
         else continue;
}
if(j==n)break;
}

   if(s>b)  printf("%d %d",a,b);
    else printf("no");
   return 0;
}



