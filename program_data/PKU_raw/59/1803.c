int n;
char w[150][150];
char q[150][150];
int k;
void c(int i,int j){if(w[i][j]=='.')w[i][j]='@';}
int main(){
cin>>n;
for(int i=1;i<=n;i++){
cin>>w[i];
for(int j=n;j>0;j--)w[i][j]=w[i][j-1];
}
cin>>k;
while(k>1){
k--;
memcpy(q,w,sizeof(w));
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
if(q[i][j]=='@'){
c(i,j-1);c(i,j+1);c(i-1,j);c(i+1,j);
}
}
int s=0;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
if(w[i][j]=='@')s++;
cout<<s<<endl;
return 0;
}
