int main()
{
    int len,i,k,a;
    char zf[101];
    gets(zf);
    len=strlen(zf);
    for(i=0,k=0;i<len;i++){
        if(zf[i]==' '&&zf[i+1]==' '){
           continue;
        }
        zf[k]=zf[i];
        k++;
    }
    zf[k]='\0';
    puts(zf);
    return 0;
}