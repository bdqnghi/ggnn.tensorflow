int panduan(char x);
int panduan(char x){
   int s=1;
   if((x>='a'&&x<='z')||(x>='A'&&x<='Z')||(x=='_')||(x>='0'&&x<='9'))
   {
   s=0;
   }
   return s;

}
int main(){
    int i,j,n,len;
    scanf("%d",&n);
    char zfc[100][21];
    for(i=0;i<n;i++){
   scanf("%s",zfc[i]);
}
     int s=0;
     for(i=0;i<n;i++){
len=strlen(zfc[i]);
s=0;

for(j=1;j<len;j++){
s=s+panduan(zfc[i][j]);
}     
       if(
((zfc[i][0]>='a'&&zfc[i][0]<='z')||(zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]=='_')&&

(s==0)
){
            printf("yes\n");
        }
       else{
            printf("no\n");
        }
    }
    return 0;
}