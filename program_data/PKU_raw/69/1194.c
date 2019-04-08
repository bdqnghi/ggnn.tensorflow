  
int main()  
{  
	int na[MAX_LEN+10];  
	int nb[MAX_LEN+10];  
	char a[MAX_LEN+10];  
	char b[MAX_LEN+10]; 
    scanf("%s", a);  
    scanf("%s", b);  
    int i, j;  
    memset( na, 0, sizeof(na));         
    memset( nb, 0, sizeof(nb));    
    
	int n1 = strlen(a);  
    j = 0;  
    for( i=n1-1;i>=0;i--)  
        na[j++] = a[i] - '0';      
  
    int n2 = strlen(b);  
    j = 0;  
    for( i=n2-1;i>=0;i--)  
        nb[j++] = b[i] - '0';      
  
     for(i=0;i<MAX_LEN;i++)   
     {   
         na[i] += nb[i];             
         if(na[i]>=10)    
         {          
                na[i] -= 10;  
                na[i+1] ++;                   
         }  
     }
     int flag = 0;   
     for( i = MAX_LEN; i >= 0; i-- )   
     {  
         if( flag==1)      
             printf("%d", na[i]);     
          else if( na[i] ) {             
               printf("%d", na[i]);  
               flag = 1;                  
          }  
     }  
     if(flag!=1)      
          printf("0");  
     return 0;  
}
