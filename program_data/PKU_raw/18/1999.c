int n;
int w[150][150];
int m[150];
int main(){
cin>>n;
for(int _n=0;_n<n;_n++){
memset(w,0,sizeof(w));
int s=0;
for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
cin>>w[i][j];
for(int t=1;t<n;t++){

for(int i=0;i<n;i++){
if((i<t)&&i)continue;
m[i]=w[i][0];
for(int j=t;j<n;j++)if(w[i][j]<m[i])m[i]=w[i][j];
w[i][0]-=m[i];
for(int j=t;j<n;j++)w[i][j]-=m[i];
}
for(int j=0;j<n;j++){
if((j<t)&&j)continue;
m[j]=w[0][j];
for(int i=t;i<n;i++)if(w[i][j]<m[j])m[j]=w[i][j];
w[0][j]-=m[j];
for(int i=t;i<n;i++)w[i][j]-=m[j];
}
s+=w[t][t];
}

cout<<s<<endl;
}
return 0;
}
