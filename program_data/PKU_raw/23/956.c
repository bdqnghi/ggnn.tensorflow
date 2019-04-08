char str[100];  
char word[100][100]; 
char a[1]; 
    
void main(){
    int i = 0;
    int j;
    char* p;
    gets(str);
    
    for(p = str;p-str < strlen(str);p ++){
        if(*p != ' '){
            a[0] = *p;
            strcat(word[i],a);
        }    
        else
            i++;
    }    
   
    for(j = i;j>0;j--)
        printf("%s ",word[j]);
        printf("%s",word[0]);
}    