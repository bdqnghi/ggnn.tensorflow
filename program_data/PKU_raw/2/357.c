
int main(){
    struct book {
           char z[27];
           int no;
           };
           
           struct book a[1000];
           
    int m, i, x, p, j  ; 
    scanf("%d", &m);
    
    for (i=0; i<m; i++){
        scanf("%d%s", &a[i].no, a[i].z);
        } 
    
    int memo[26]={0};
    
    for (i=0; i<m; i++){
        for (j=0; j<26; j++){
            if (a[i].z[j]=='\0')
            break;
            x=(a[i].z[j])-65;
            memo[x]++;
            }
        } 
        x=0;
        p=0;
    for (i=0; i<26; i++){
       
        if (memo[i]>x){x=memo[i];
                       p=i;
                       }
        }
     
     printf("%c\n", p+65); 
      
     int n=0;
        
     for (i=0; i<m; i++){
        for (j=0; j<26; j++){
            if (a[i].z[j]=='\0')
            break;
            if (a[i].z[j]==p+65)
            n++;  
            }
        } 
        
     printf("%d\n", n);
     
     for (i=0; i<m; i++){
        for (j=0; j<26; j++){
            if (a[i].z[j]=='\0')
            break;
            if (a[i].z[j]==p+65){
            printf("%d\n", a[i].no);
            break;}  
            }
        } 
        
        
    return 0;    
    
    }
