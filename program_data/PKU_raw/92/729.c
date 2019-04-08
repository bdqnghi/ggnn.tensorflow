

int q[1000];
int t[1000];

int main(){
  int n;
  int i;
  int qs,qe;
  int ts,te;
  while(cin>>n && n!=0){
    for(i=0;i<n;i++)
      cin>>t[i];
    for(i=0;i<n;i++)
      cin>>q[i];
    qs=ts=0;
    qe=te=n-1;
    sort(q,q+n);
    sort(t,t+n);
    int price=0;
    while(n--){
      if(t[te]>q[qe]){
        price++;
        te--;
        qe--;
      }
      else if(t[ts]>q[qs]){
        price++;
        qs++;
        ts++;
      }
      else
      {
        if(t[ts]>q[qe]){
          price+=(qe+1-qs);
          break;
        }
        else if(t[ts]<q[qe])
          price--;
        ts++;
        qe--;
      }
    }
    cout<<price*200<<endl;
    
    }
  return 0;
}
          



