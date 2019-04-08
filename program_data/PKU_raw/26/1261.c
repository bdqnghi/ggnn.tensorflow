int main(){
    char jz[101],xg[101];
    gets(jz);
    int i,j,len;
    len=strlen(jz);
    for(i=0,j=0;i<len-1;i++){
        if(jz[i]!=' '){
            xg[j]=jz[i];
            j++;
        }else if(jz[i+1]!=' '){
            xg[j]=jz[i];
            j++;
        }
    }xg[j]=jz[len-1];
    for(int k=j+1;k<101;k++){
        xg[k]='\0';
    }
    puts(xg);
    return 0;
}