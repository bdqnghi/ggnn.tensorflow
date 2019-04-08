int main()
{
    char s[256],a[256],b[256];
    int i,n,f,t,j,k,m,l,p,q=0,o;
    gets(s);
    gets(a);
    gets(b);
    p=strlen(s);
    m=strlen(a);
    n=strlen(b);
    for(i=0;s[i]!='\0';i++){
       if(s[i]==a[0]){
       f=0;
          for(j=0;j<m;j++){
             if(s[j+i]!=a[j])  f=1;
             }
          if(f==0){
          t=i;
          if(t!=0){
             for(k=0;k<t;k++){
                printf("%c",s[k]);
                q=1;
                }
             }
          for(l=0;l<n;l++){
             printf("%c",b[l]);
             }
          if(s[m+t]!='\0'){
             for(k=m+t;k<p;k++){
                printf("%c",s[k]);
                }
                printf('\0');
                q=1;
             }
          if(q==1)  break;
       }
       if(q==1)  break;
       }
       if(q==1)  break;
       }
       if(q==0)  printf("%s",s);
       scanf("%d",&o);
    return 0;
}           
