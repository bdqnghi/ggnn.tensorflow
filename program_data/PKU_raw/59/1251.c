int main(){
int n,i,j,k,m,num=0;
scanf("%d",&n);
char s[n][n+1];
int a[n][n];
for(i=0;i<n;i++){
scanf("%s",s[i]);
}
for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            a[j][k]=0;
        }
}
scanf("%d",&m);
if(m==1){
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(s[i][j]=='@')
        a[i][j]=1;
    }
}
}
else
    {for(i=0;i<m-1;i++){
    for(j=0;j<n;j++){
        for(k=0;k<n;k++){
        if(s[j][k]=='@' && a[j][k]!=i+10){
        a[j][k]=1;
        if(j+1<n){
            if(s[j+1][k]=='.' &&  a[j][k]!=i+10){
        s[j+1][k]='@';
        a[j+1][k]=i+10;
        }
        }
        if(j-1>=0){
            if(s[j-1][k]=='.' &&  a[j][k]!=i+10){
        s[j-1][k]='@';
        a[j-1][k]=i+10;
        }
        }
        if(k+1<n){
            if(s[j][k+1]=='.' && a[j][k]!=i+10){
        s[j][k+1]='@';
        a[j][k+1]=i+10;
            }
            }
        if(k-1>=0){
            if(s[j][k-1]=='.' && a[j][k]!=i+10){
        s[j][k-1]='@';
        a[j][k-1]=i+10;
            }
        }
        }
        }
    }
}
}
for(j=0;j<n;j++){
        for(k=0;k<n;k++){
            if(a[j][k]!=0){
            num++;
        }
}
}
printf("%d",num);
return 0;
}


