
int main()
{
    char input[50];
    int output=0,i,k=0,l;
    gets(input);
    l=strlen(input);
    for(i=0;i<=l-1;i++){
                        if(input[i]>=48&&input[i]<=57){
                                                    output=10*output+(input[i]-48);
                                                    k++;
                                                     }
                        else{
                             if(k>0&&input[i-1]>=48&&input[i-1]<=57)
                             {printf("%d\n",output);
                             output=0;}
                             }
                        }
    if(output!=0){printf("%d", output);}
    return 0;
}
