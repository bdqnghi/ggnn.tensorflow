int main()
{
    int i,j,k,hh,la,lb,ls,same,head,end,l,sum;
    char s[100],a[100],b[100];
    gets(s);
    gets(a);
    gets(b);
    ls=strlen(s);
    la=strlen(a);
    lb=strlen(b);
    hh=0;
    sum=0;
    for(i=0;i<ls;i++){
                      same=0;
                      if((s[i]==a[0])&&(i==0||s[i-1]==' ')){
                                     l=1;
                                     for(j=1;j<la;j++){
                                                       if(a[j]!=s[i+j]){
                                                                        same=0;
                                                                        break;
                                                                        }
                                                       l++;
                                                       same=1;
                                                       head=i;
                                                       end=i+la-1;
                                                       }
                                     }
                      if((same==1)&&(i+la==ls||s[i+la]==' ')){
                                   for(k=hh;k<head;k++)
                                   printf("%c",s[k]);
                                   for(k=0;k<lb;k++)
                                   printf("%c",b[k]);
                                   hh=end+1;
                                   sum=1;
                                  }
                      }
    if(sum==0){
                printf("%s",s);
                }
    if(sum==1){
                for(i=hh;i<ls;i++)
                printf("%c",s[i]);
                }
     return 0;
}
