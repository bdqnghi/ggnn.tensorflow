
void reverse(char a[10]){
    int i=0,k=0,s=0;
    char b[10];
    
    if(strcmp(a,"0")==0){
       printf("0\n");return;}
       
    if(strcmp(a,"-0")==0){
       printf("0\n");return;}
    
    if(a[0]=='-'){
       
       printf("-");
       k=1;
    }
    
    for(i=0;i<strlen(a)-k;++i){
        if(a[strlen(a)-1-i]=='0' && s==0)
           continue;
        else 
           s=1;
        b[i]=a[strlen(a)-1-i];
        printf("%c",b[i]);
    }
    printf("\n");
    //printf("reverse: %s\m",b);
}

int main(){
    int i,j,k=0;
    char a[10];
    for(i=0;i<6;++i){
        scanf("%s",a);
        reverse(a);  
    }
} 
