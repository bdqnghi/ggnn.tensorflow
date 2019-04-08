int main()
{
    int i, j, n,k[21];                 
    char s[MAX+1];               
    scanf("%d", &n);             
    for (i = 0; i < n; i++) {    
        scanf("%s", s);
        k[i]=0;          
        for (j = 0; s[j]; j++) {
            if (!((s[j] == '_') ||     
                  (s[j] >= 'A' && s[j] <= 'Z') ||   
                  (s[j] >= 'a' && s[j] <= 'z') ||   
                  (s[j] >= '0' && s[j] <= '9' && j > 0)))
                k[i]+=1 ;        
        }
        if(k[i]==0){
                 printf("yes\n");
                 }else{
                       printf("no\n");
                       }
                       }
    return 0;
}