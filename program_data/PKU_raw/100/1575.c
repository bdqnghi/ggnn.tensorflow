int main(){
  char a[300],c;
  int i,n,k,s;
  scanf("%s",a);
  n=strlen(a);
    s=0;
  for(i=0;i<n;i++){
      if(a[i]<65||(a[i]>90&&a[i]<97)||a[i]>122){
          s=s+1;
                                            }
                  }
   if(s==n){
     printf("No");
              }
  for(k=65;k<=90;k++){
      s=0;
     for(i=0;i<n;i++){
        if(a[i]==k){
            s=s+1;
                   }
                     }
       if(s!=0){
       c=k;
       printf("%c=%d\n",c,s);
                }
                     }
  for(k=97;k<=122;k++){
      s=0;
     for(i=0;i<n;i++){
        if(a[i]==k){
            s=s+1;
                   }
                     }
       if(s!=0){
            c=k;
             printf("%c=%d\n",c,s);
                }
                     }
    return 0;
  }

