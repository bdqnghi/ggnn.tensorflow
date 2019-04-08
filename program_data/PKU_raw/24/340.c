int main(){
    char number[10000];
    gets(number);
    char danci[100][100];
    int max,min;
    int i,j,k=0,n=0;
    char chang[100],duan[100]="aaaaa";
    for(i=0;i<strlen(number);i++){
           if(number[i]!=' '&&number[i]!=0){
              danci[n][k]=number[i];
              k+=1;}
            else{
               n+=1;
               k=0;}
              
    }
    max=0;
    min=10;
    for(i=0;i<=n;i++){
        if(strlen(danci[i])>max){max=strlen(danci[i]);
            strcpy(chang,danci[i]);}
        if(strlen(danci[i])<min){min=strlen(danci[i]);
            strcpy(duan,danci[i]);}}
    printf("%s\n%s",chang,duan);
return 0;
}