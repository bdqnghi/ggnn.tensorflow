int main()
{
    char str[105];
    gets(str);
    int i=0,j=0,words=0;
    char word[50][20];
    while(str[i]!='\0'){
        if(str[i]!=' '){
            word[words][j]=str[i];
            i++;
            j++;
        }
        else{
            word[words][j]='\0';
            words++;
            i++;
            j=0;
        }
    }
    word[words][j]='\0';
    for(i=words;i>0;i--){
        cout<<word[i]<<" ";
    }
    cout<<word[0]<<endl;
    return 0;
}