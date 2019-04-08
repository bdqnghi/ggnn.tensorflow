int main(){
    int i,j=0,len,a;
    char jz[LEN],hjz[LEN];
    gets(jz);
    hjz[0]=jz[0];
    j++;
    for(i=1;i<LEN;i++){
        if(jz[i]==' '&&jz[i-1]==' '){continue;} else {
            hjz[j]=jz[i];
            j++;
        }
    }
    printf("%s",hjz);
    return 0;
}




