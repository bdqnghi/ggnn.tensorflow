char change(char c){
    if('A'<=c&&c<='Z')return c-'A'+'a';
    return c;
}
char f(char a[],int la,char b[],int lb){
    for(int i=0;i<la&&i<lb;i++){
         a[i]=change(a[i]);b[i]=change(b[i]);
         if(a[i]!=b[i]){
      if(a[i]<b[i])return '<';
      if(a[i]>b[i])return '>';
               }
        }
    return '=';
}
int main(){
    char a[100],b[100];
    gets(a);gets(b);
    int la,lb;
    la=strlen(a);lb=strlen(b);
    printf("%c",f(a,la,b,lb));
     return 0;
}