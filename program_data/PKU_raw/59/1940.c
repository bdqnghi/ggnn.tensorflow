int main(){
char a[100][100];
int b[100][100],i,j,l,m,n,c=0;
scanf("%d\n",&n);
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%c",&a[i][j]);
if(a[i][j]=='@')b[i][j]=1;}
scanf("\n");}
scanf("%d",&m);
for(l=2;l<=m;l++){
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(a[i][j]=='@'){
if((i-1>=0)&&a[i-1][j]!='#')b[i-1][j]=1;
if((i+1<n)&&a[i+1][j]!='#')b[i+1][j]=1;
if((j-1>=0)&&a[i][j-1]!='#')b[i][j-1]=1;
if((j+1<n)&&a[i][j+1]!='#')b[i][j+1]=1;
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(b[i][j]==1)a[i][j]='@';
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(b[i][j]==1)c++;
printf("%d",c);
return 0;
}