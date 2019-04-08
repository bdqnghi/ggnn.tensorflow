int main(){
    int N;
    cin>>N;
    double f[100][2],m=0;
    for (int i=1;i<=N;i++){
        cin>>f[i][0]>>f[i][1];
        for (int j=1;j<i;j++){
            m=max(m,sqrt((f[j][0]-f[i][0])*(f[j][0]-f[i][0])+(f[j][1]-f[i][1])*(f[j][1]-f[i][1])));
            }
        }
    cout<<fixed;
    cout<<setprecision(4)<<m<<endl;
    return 0;
    }