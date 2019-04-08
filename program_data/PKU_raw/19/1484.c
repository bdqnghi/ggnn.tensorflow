int main(){
int i,j=0,k=0;
char s[1000],a[100],b[100],p[100][100];
gets(s);
cin>>a>>b;
for(i=0;i<strlen(s);i++){
    if(s[i]==' '){
        j++;
        k=0;}
    else{ 
          p[j][k]=s[i];
          k++;}}
for(i=0;i<=j;i++){
    if(strcmp(p[i],a)==0){
       strcpy(p[i],b);}}
cout<<p[0];
for(i=1;i<=j;i++){
    cout<<' '<<p[i];}                                                                                                                                                                                                                              

return 0;
}