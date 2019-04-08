int main(){
char s[1000];
gets(s);
getchar();
int i,a[300]={0},k=0;
for(i=0;i<strlen(s);i++){
                         if(s[i]!=' '){
                       a[k]++;  
                       }
                       if(s[i]==' '){
                                     k++;
                                    
                         }
                         }
 i=1;
 printf("%d",a[0]);
 getchar();
 while(i<=k){
             if(a[i]==0){
                i++;
             }else{
                printf(",%d",a[i]);getchar();
                i++;
                }

                }      
    return 0;
} 