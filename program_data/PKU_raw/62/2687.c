int main(){
    int i,n,r,x=0,y=0;
    char a[300],b[300];
    gets(a);
    n=strlen(a);
    if(a[0]==' '){ 
              for(i=1;i<n;i++){
                               a[i-1]=a[i];
                               }
                               
    for(i=0;i<n-1;i++){
                     if(a[i]!=' '){
                                y=0;
                                b[x]=a[i];
                                x++;
                                }
                     if(a[i]==' '&&y==0){
                                y=1;
                                b[x]=' ';
                                x++;
                                }
                     }}
    else{
         for(i=0;i<n;i++){
                     if(a[i]!=' '){
                                y=0;
                                b[x]=a[i];
                                x++;
                                }
                     if(a[i]==' '&&y==0){
                                y=1;
                                b[x]=' ';
                                x++;
                                }
                     }
         }
    if(b[x-2]==0){
                  for(i=0;i<x-1;i++){
                                     printf("%c",b[i]);
                                     }
                  }
    else{
         for(i=0;i<x;i++){
                                     printf("%c",b[i]);
                                     }
         }
    return 0;
}