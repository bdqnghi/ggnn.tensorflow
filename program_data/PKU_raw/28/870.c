int main()
{
    char a[6000]={0};
    int b[300]={0};
    b[0]=-1;
    int i=0;
    int k=0;
    gets(a);
    int len=strlen(a);
    for(i=0;i<len;i++){
                         if(a[i]!=' '){
                                    k=k+1;}
                         else if(a[i]==' '&&k!=0){
                              printf("%d,",k);
                         k=0;}
   }
   printf("%d",k);
   return 0;
} 