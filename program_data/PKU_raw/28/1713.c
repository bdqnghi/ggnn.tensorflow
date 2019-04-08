int main(){
    int isfirst=1;
    char word[1000];
    while(scanf("%s",&word)!=EOF)
    {
        if(isfirst==1)
        {
            isfirst=0;
        }
        else
        {
            printf(",");
        }
        printf("%d",strlen(word));
    }
    printf("\n");
    return 0;
}
