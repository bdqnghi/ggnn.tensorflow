int main(){
    int n,i,m,j;
    cin>>n;
    int s[n],b[n];
    for(i=1;i<=n;i++){
       cin>>m;
       int a[i][m];
       for(j=0,s[i]=60,b[i]=0;j<m;j++){
                        cin>>a[i][j];
       b[i]=a[i][j]+3*j+3;
       if(b[i]<=60){s[i]-=3;}
       else if(b[i]>=63){s[i]=s[i];}
       else{s[i]=a[i][j];}}
       printf("%d\n",s[i]);
       }
       
       return 0;
       }