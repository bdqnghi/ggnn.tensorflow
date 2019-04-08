int main()
{
   char a[2000];
   char b[300][20];
   int i;
   int n=0;
   int k=0;
   gets(a);
   for(i=0;a[i]!='\0';i++){
       if(a[i]!=' '){
          b[n][k]=a[i];
          k++;
       }else if((a[i]==' ')&&(a[i+1]!=' ')){
          b[n][k]='\0';
          n++;
          k=0;
       }
    }
    b[n][k]='\0';
    for(i=0;i<n;i++){
        printf("%d,",(strlen(b[i])));
    }
    printf("%d",(strlen(b[n])));   
    return 0;
}     
          
             