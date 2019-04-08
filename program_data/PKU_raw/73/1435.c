int main(){
int ml[5],mh[5];
int w[5][5];
memset(mh,0,sizeof(mh));
memset(ml,0x77777777,sizeof(ml));
for(int i=0;i<N;i++)for(int j=0;j<N;j++){cin>>w[i][j];if(w[i][j]>mh[i])mh[i]=w[i][j];if(w[i][j]<ml[j])ml[j]=w[i][j];}
int b=1;
for(int i=0;i<N;i++)for(int j=0;j<N;j++)if((w[i][j]==mh[i])&&(w[i][j]==ml[j])){b=0;cout<<i+1<<' '<<j+1<<' '<<w[i][j];}
if(b)cout<<"not found";
return 0;
}
