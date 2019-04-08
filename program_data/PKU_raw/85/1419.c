int main()
{
    int i, j, n;                
    char s[1000][MAX+1];               
    scanf("%d", &n);             
    for (i = 0; i < n; i++) {   
        scanf("%s", s[i]);  
	}
    for(i=0;i<n;i++){
        for (j = 0; s[i][j]; j++) { 
            if (!((s[i][j] == '_') ||     
                  (s[i][j] >= 'A' && s[i][j] <= 'Z') ||   
                  (s[i][j] >= 'a' && s[i][j] <= 'z') ||  
                  (s[i][j] >= '0' && s[i][j] <= '9' && j > 0)))
                                                
                break;           
        }
        printf(s[i][j] ? "no\n":"yes\n"); 
    }  
    return 0;
}