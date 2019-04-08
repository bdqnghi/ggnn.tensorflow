


int main(){
    int n;
    char s[40];
    char local[3][5] = {
         "er", "ly", "ing"
         }; 
    char res[40];
    scanf("%d", &n);
    
    while(n--){
        
         scanf("%s", s);
         int len = strlen(s);
         if(len > 2 && strcmp(s + len - 2, local[0]) == 0){
                for(int i = 0; i < len - 2; ++i){
                        printf("%c", s[i]);
                }
                printf("\n");
         }
         else if(len > 2 && strcmp(s + len - 2, local[1]) == 0){
              for(int i = 0; i < len - 2; ++i){
                        printf("%c", s[i]);
                }
                printf("\n");
         }
         else if(len > 3 && strcmp(s + len - 3, local[2]) == 0){
              for(int i = 0; i < len - 3; ++i){
                        printf("%c", s[i]);
                }
                printf("\n");
         }
         else{
              printf("%s\n", s);
         }
    }
    
}
