
int main(){
    int n,i,s[100],j;
    scanf("%d",&n);
    char a[n][20];
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
         }
         for(i=0;i<n;i++){
             s[i]=0;
             for(j=0;a[i][j]!='\0';j++){
                 if(j==0){
                     if((a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]=='_')) s[i]=1;
                     else {s[i]=0;break;}
                 }
                 else if((a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]=='_')||(a[i][j]>='0'&&a[i][j]<='9')) s[i]=1;
                 else {s[i]=0; break;}
             }     if(s[i]==0) printf("no\n");else printf("yes\n"); 
         }
         
         return 0;
}  