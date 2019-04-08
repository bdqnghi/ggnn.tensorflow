int main()
{
 int i,j,n,f,k,l,c;
 char a[1000];
 int h[300];
 gets(a);
 n=strlen(a);
 s:;
 for(i=0;i<n;i++){
   if(a[i]==' '&&a[i+1]==' '){
     for(j=i;j<=n;j++){
       a[j]=a[j+1];
     }
     n=n-1;
     goto s;
   }
 }
 n=strlen(a);
 c=0;
 f=0;
 pp:;
 for(i=0;i<=n;i++){
   if(a[i]!='\0'){
     if(a[i]!=' '){
       c=c+1;
     }else{
      for(k=0;k<=i;k++){
        for(j=0;j<n;j++){
          a[j]=a[j+1];
        }
      }
      h[f]=c;
      f=f+1;
      n=n-c-1;
      c=0;
      goto pp;
     }
    }else{
        h[f]=c;
    }
 }
 for(l=0;l<f;l++){
   printf("%d,",h[l]);
 }
 printf("%d",h[f]);
 return 0;
}
