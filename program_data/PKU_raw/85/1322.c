int main()
{
    int i, j, n,k=0;                 
    char s[MAX+1];              
    scanf("%d", &n);             
    for (i = 0; i < n; i++) {    
        scanf("%s", s); 
		k=0;
        for (j = 0; s[j]; j++) {
			
            if (!((s[j] == '_') ||     
                  (s[j] >= 'A' && s[j] <= 'Z') ||   
                  (s[j] >= 'a' && s[j] <= 'z') ||   
                  (s[j] >= '0' && s[j] <= '9' && j > 0)))
                                               
                break; 
			k++;

        }
        if (k==strlen(s))  printf ("yes\n");
		if (k!=strlen(s))  printf ("no\n");
    }   
    return 0;
}