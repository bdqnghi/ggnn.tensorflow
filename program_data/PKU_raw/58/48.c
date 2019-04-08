void main() 
{ 	
    char a[100]; 	
    int g=0; 	
    scanf("%d\n",&g); 	
    while(g--) 	
    { 		
        int flag = 0; 		
        gets(a); 		
        if(*a == '\0') 		
        { 			
             g++; 			
             continue; 		
        } 		
        char* p = a; 		
        for(p=a;p<a+strlen(a);p++) 		
        { 			
             if((!isalpha(*p))&&(!isdigit(*p))&&(*p!='_')) 			
             { 				
                   flag = 1; 				
                   printf("0\n"); 				
                   break; 			
             } 		
        } 		
        if(flag == 1) 		
        { 			
             continue; 	
        } 		
        if(*a=='_'||isalpha(*a)) 		
        { 			
             printf("1\n"); 	
        } 		
        else 		
        { 			
             printf("0\n"); 		
        } 	
    }	 	 
} 


