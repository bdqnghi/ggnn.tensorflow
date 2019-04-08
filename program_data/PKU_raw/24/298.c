int main()
{
    int i,j=0,word=0,count=0;
    char str[1000];
    int p[50]={0};
    int l,n1,n2;
    int lengh[50]={0};
    gets(str);
    int len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]==' '){
        word=0;
        }
        else {
            if(word==0){
            word=1;
            p[j]=i;
            j++;
            count++;
            }
            }
        }
        for(i=j=0;i<count;i++){
            for(l=p[i];str[l]!=' '&&l<len;l++){
                lengh[j]++;
                }
                j++;
            }
            int max=0,min=100000;
            for(i=0;i<count;i++){
                if(lengh[i]>max){
                   n1=p[i];
                   max=lengh[i];
                    }
                    if(lengh[i]<min){
                        n2=p[i];
                        min=lengh[i];
                        }
                        }
              for(i=n1;str[i]!=' '&&i<len;i++)
              printf("%c",str[i]);
              printf("\n");
              for(i=n2;str[i]!=' '&&i<len;i++)
              printf("%c",str[i]);
              printf("\n");
              return 0;

    }
