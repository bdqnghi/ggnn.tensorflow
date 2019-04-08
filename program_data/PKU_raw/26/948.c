int main(){
    int i,j=0,a=0;
    char s[101];
    char z[102];
    gets(s);
    for(i=0;i<100;i++){
        z[i]=' ';
    }
    for(i=0;!(s[i]==0);i++){
        if(!(s[i]==' ')){
           j=j+a;  
           z[j]=s[i];
           j++;
           a=0;
        }
        else{
            a=1; 
        }  
    }
    z[j]='\0';
    puts(z);
    return 0;
}