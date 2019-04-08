int main(){
int N;
cin>>N;
int a[10][3];
int b[100][2];
int S=0;
float d[100];
for (int i=0;i<N;i++)cin>>a[i][0]>>a[i][1]>>a[i][2];
for (int i=0;i<N;i++){
for (int j=i;j<N;j++){
if (i==j)continue;
b[S][0]=i;b[S][1]=j;
d[S]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]));
//cout<<d[S]<<endl;
S++;
}
}
int t;
float ft;
for (int i=0;i<S;i++){
for (int j=S-1;j>i;j--){
if (d[j]>d[j-1]){
ft=d[j];d[j]=d[j-1];d[j-1]=ft;
t=b[j][0];b[j][0]=b[j-1][0];b[j-1][0]=t;
t=b[j][1];b[j][1]=b[j-1][1];b[j-1][1]=t;
}
}
}
cout<<fixed;
for (int i=0;i<S;i++){
cout<<"("<<a[b[i][0]][0]<<","<<a[b[i][0]][1]<<","<<a[b[i][0]][2]<<")-("<<a[b[i][1]][0]<<","<<a[b[i][1]][1]<<","<<a[b[i][1]][2]<<")="<<setprecision(2)<<d[i]<<endl;
}
cin>>N;
return 0;
}
