int main(){
    char a[101];
    gets(a);
    int m=strlen(a)+1;
    char*b;
    b=(char*)malloc(sizeof(char)*m);
    int i,k=0;
    for(i=0;i<m-2;i++){
         if(a[i]!=32){
              b[k]=a[i];
              k++;
         }else if(a[i]==32&&a[i+1]==32){
              continue;
         }else if(a[i]==32&&a[i+1]!=32){
              b[k]=32;
              k++;
         }
    }
    b[k]=a[m-2];
    b[k+1]='\0';
    char*c;
    c=(char*)malloc(sizeof(char)*(k+2));
    for(i=0;i<k+1;i++){
       c[i]=b[i];
    }
    puts(c);
    return 0;
}
