int main(){
    char aa[100];
    gets(aa);
    int i,j;
    i=0;
    while(aa[i]!='\0'){
        j=0;
       if(aa[i]!=' '){
       cout<<aa[i];
       i++;
       }
       if(aa[i]==' '){
       cout<<" ";
         while(aa[i+j]==' ')
          j++;
          i=i+j;
          }
          }
          return 0;
          }         