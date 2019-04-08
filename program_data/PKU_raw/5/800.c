
int main(){
double n,r;
int m=0,i,s=0;
char a[500],b[500];
scanf("%lf",&n);
scanf("%s",a);
scanf("%s",b);
int x=strlen(a);
int y=strlen(b);
if(x!=y){
         printf("error");
         }else{
               for(i=0;i<x;i++){
                                 if(!(((a[i]=='A')||(a[i]=='T')||(a[i]=='C')||(a[i]=='G'))
                                 &&((b[i]=='A')||(b[i]=='T')||(b[i]=='C')||(b[i]=='G')))){
                                                                                        
                                                                                        s++;
                                                                                        }
                                                                                        }
               
                                 if(s!=0){
                                          printf("error");
                                          }else{
                                                for(i=0;i<x;i++){
                                 if(a[i]==b[i]){
                                                                                         m++;
                                                                                         }
                                                                                         
                                                                                         }
                                                                                         r=1.0*m/x;
                                                                                         if(r>=n){
                                                                                                  printf("yes");
                                                                                                  }else{
                                                                                                        printf("no");
                                                                                                        }
                                                                                                        
                                                                                                        }
                                                                                                        }

return 0;
}
