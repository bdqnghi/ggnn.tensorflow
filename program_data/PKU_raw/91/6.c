
int main (){
    int n, i;
    char s[101]={0};
    char s1[101]={0};
    char* p, * p1;
    
    p=s;
    p1=s1;
    
    gets(s);
    n=strlen(s);
    
    for (i=0; i<n-1; i++){
        *(p1+i)=*(p+i)+*(p+i+1);
        }
        
    *(p1+n-1)=*(p+n-1)+*(p);
    
    printf("%s", s1);
    
       
    
    
    return 0;
    }
    
    
    
