int x[11],y[11],z[11],cnt,n,dist[105];
int getdist(int i,int j){
    return (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
       cin>>x[i]>>y[i]>>z[i];
    for(int i=1;i<n;i++)
       for(int j=i+1;j<=n;j++)
          dist[++cnt]=getdist(i,j);
    sort(dist+1,dist+1+cnt);             //???? ????
    for(int k=cnt;k>=1;k--)if(dist[k]!=dist[k-1])     //??????????????
       for(int i=1;i<n;i++)
          for(int j=i+1;j<=n;j++)
             if(getdist(i,j)==dist[k])
               printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",x[i],y[i],z[i],x[j],y[j],z[j],(double)(sqrt(dist[k])));//???? ????????
    
    return 0;
}

