    
    int main()
    {
        char cc[101],dd[101],e;
        char *c,*d;  
        int i=0;
        gets(cc);
    
        d=dd;
        c=cc;
        for(;*c!='\0';c++,d++){
        *d=*c+*(c+1);                      
        }
        
        e=*(c-1);
        *d='\0';
        c=cc;
        *(d-1)=*c+e;
        
        d=dd;
        printf("%s",d);
        return 0;
    }
