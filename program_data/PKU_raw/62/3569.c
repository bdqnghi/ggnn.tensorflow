int main(){
    char a[200];
    int i,j,l,s;
    s=-1;
    gets(a);
    l=strlen(a);
    for(j=0;j<100000;j++){
    for(i=0;i<l-1;i++)
    {
        if(a[i]==' '&&a[i+1]==' ')
        {
            s=s+1;
            for(j=i;j<l-1;j++)
            {
                a[j]=a[j+1];
                a[l-s]='\0';
            }
        } 
    }}
    puts(a);
    return 0;
}
