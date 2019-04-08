int rr(int a){
    if((a%4==0&&a%100!=0)||a%400==0)
    return 1;
    else return 0;
}
int main(){
    int n,m,p,q,i,k,t=0;
    cin>>n;
    int aa[n+1],bb[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=1;i<=n;i++){
         k=0;             
      cin>>m>>p>>q;
      if(p>q){
         t=q;
         q=p;
         p=t;      
              }
      while(p<q){
         k=k+bb[p];
         if(p==2)
         k=k+rr(m);
         p++;        
                 }
       if(k%7==0)
       aa[i]=1;
       else aa[i]=0;
       }
       for(i=1;i<=n;i++)
       {
        if(aa[i]==1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
                        }  
       return 0;
       } 