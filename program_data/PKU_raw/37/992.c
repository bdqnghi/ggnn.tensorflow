
int main (){
    int n, i, j, k, l, count;
    char a[100001];
    char* p;
    p=a;
    
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++){
        scanf ("%s", a);
        l=strlen (a);
        
        for (j=0; j<l; j++){
            
            for (k=j+1; k<l; k++){
                
                if (*(p+j)!='0'){
                               if (*(p+j)==*(p+k)){
                                    *(p+k)='0';
                                    count=1;
                                    }
                               }
                if (count>0&&k==l-1){
                             *(p+j)='0';
                             count=0;
                             }
                
                
                }
            }
        for (j=0; j<l; j++){
            if (*(p+j)!='0'){
                           printf ("%c\n", *(p+j));
                           break;
                           }
            if (j==l-1){
                        printf("no\n");
                        }
            }
        
        
        }
    
    
    return 0;
    }
    
    
    
