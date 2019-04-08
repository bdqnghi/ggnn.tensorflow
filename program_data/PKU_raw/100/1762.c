int main()
{
    char str[300];
    scanf("%s",str);
    int i,j,k=0,a=0,m,p=0,N,l=0;
    N=strlen(str);
    for(j=0;j<300;j++){
       if(str[j]>=65&&str[j]<=90||str[j]>=97&&str[j]<=122){
           l++;
       }
       if(str[j]==0)
       break;
    }
    if(l==0)
       printf("No");
    else{
       for(i=65;i<=90;i++){
           for(j=0;j<N;j++){
               if(str[j]==i){
                  k++;
               }
               if(str[j]==0)
               break;
          }
          if(k!=0)
          printf("%c=%d\n",i,k);
          k=0;
       }
       for(m=97;m<=122;m++){
           for(j=0;j<N;j++){
               if(str[j]==m){
                  p++;
               }
               if(str[j]==0)
                  break;
           }
           if(p!=0)
           printf("%c=%d\n",m,p);
           p=0;
       }
 }
 return 0;
}
