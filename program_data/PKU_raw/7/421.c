int main()
{
    char s[300],b[50],r[50],a[50];
    int i,k,n1,n2,n3,n,result;
    scanf("%s%s%s",s,b,r);
    n1=strlen(s);
    n2=strlen(b);
    n3=strlen(r);
    for(i=0;i<n1-n2+1;i++){
        for(k=0;k<n2;k++){
           a[k]=s[i+k];
        }a[n2]='\0';
        result=strcmp(a,b);
        if(result==0){
           n=i;
           break;
        }else continue;
     }
     for(i=0;i<n1;i++){
         if(i==n){
           printf("%s",r);
		   i=i+n2-1;
         }else{
           printf("%c",s[i]);
         }
      }
      return 0;
}
     