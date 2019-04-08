char oneChar(const char* str){
    char deq[26]; 
    unsigned int  i = 0,j=0;
    unsigned char letter[26]; 
    memset(letter,0,26);
    while(*str!='\0'){
        letter[*str-'a']++;
        if(letter[*str-'a']==1)deq[i++]=*str;
        str++;
    }
    for(;j<i;j++)
        if(letter[deq[j]-'a']==1)return deq[j];
    if(i==j) return 0;
}
int main(){
    const unsigned int num;
    unsigned int i;
    char ch;
    scanf("%d",&num);
    char* str[num];
    for(i=0;i<num;i++){
        str[i] = (char*)malloc(MAX_LEN);
        scanf("%s",str[i]);
        fflush(stdin);
        tolower(str[i]);
    }
    for(i=0;i<num;i++){
        ch = oneChar(str[i]);
        if(ch==0) printf("no\n",i+1);
        else printf("%c\n",ch);
    }
 for(i=0;i<num;i++){
        free(str[i]);
    }
    return 0;
}

