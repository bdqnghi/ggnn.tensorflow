int main(){
    int i,e,u,x=0,y;
    char z1[201];
    gets(z1);
    e=strlen(z1);
    for(i=1;i<e;i++){
        if((z1[i-1]==' '||z1[i-1]=='1')&&(z1[i]==' ')){
            z1[i]='1';
        }
    }
    for(i=0;i<e;i++){
        if(z1[i]=='1'){  
        }else{
            printf("%c",z1[i]);
        }
    }
    return 0;
}