int main(){
    int n,i,a,b;
    cin>>n;
    int cc[n+1];
    double bb[n+1];
    for(i=1;i<=n;i++){
    cin>>a>>b;
    bb[i]=(double)b/(double)a; 
         }
   for(i=2;i<=n;i++){
    if(bb[i]-bb[1]>0.05)
    cc[i]=2;
    if(bb[i]-bb[1]<-0.05)
    cc[i]=0;
    if(bb[i]-bb[1]<=0.05&&bb[i]-bb[1]>=-0.05)
    cc[i]=1;
     }
      for(i=2;i<=n;i++){
   if(cc[i]==0)
    cout<<"worse"<<endl;
    if(cc[i]==1)
    cout<<"same"<<endl;
    if(cc[i]==2)
    cout<<"better"<<endl;
}
return 0;
}