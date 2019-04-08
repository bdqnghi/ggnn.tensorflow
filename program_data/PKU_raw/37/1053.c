int main()
{
    int n,i,j,zimu[27]={0},loci[27]={0},minadr=100009,flag=0;
    char str[100001],num[10],*ptr,list[27];
    gets(num);n=atoi(num);
    for(i=0;i<n;i++){
        gets(str);
        for(j=0;*(j+str)!='\0';j++){
                                     ptr=j+str;
                                     *(zimu+*ptr-'a'+1)+=1;
                                     if(*(zimu+*ptr-'a'+1)==1){
                                                             *(loci+*ptr-'a'+1)=j;
                                                             }
                                     }

        for(j=1;j<27;j++){
                          if(*(zimu+j)==1){
                                           if(*(loci+j)<minadr)
                                                                minadr=*(loci+j);
                                                                flag=1;

                                           }
                          }
        if(flag){
                printf("%c\n",*(str+minadr));

                }
        else
            printf("no\n");
        for(j=1;j<27;j++){
                          *(zimu+j)=0;*(loci+j)=0;minadr=100009;flag=0;
                          }
        minadr=100009;flag=0;
        
        }
     return 0;                                        
}
