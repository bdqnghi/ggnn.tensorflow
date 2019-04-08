int main(){
    char u[1000];
    int n,i,j,c,b=0;
    gets(u);
    n=strlen(u);
    
    for(i=1;i<n-1;i++){
    c=0;         
    while(1){
   
    if(u[i]==32&&u[i+1]==32){
    for(j=i;j<n-2;j++){
    u[j+1]=u[j+2];     
    }
    c++;
          }
         
    if((u[i]==32&&u[i+1]!=32)||u[i]!=32)
          break; 
          }
           b=b+c;
          } 
                
                
for(i=0;i<n-b;i++){   
printf("%c",u[i]);
}

return 0;  
}
