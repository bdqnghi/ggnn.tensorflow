int reverse(int t){
  int flag=1;
  if(t==0)return 0;
  if(t<0){
    flag=-1;
    t=-t;
  }
  int ans=0;
  while(t){
    ans*=10;
    ans+=t%10;
    t/=10;
  }
  return ans*flag;
}
int main(){
  for(int i=0;i<6;i++){
    int t=0;
    cin>>t;
    cout<<reverse(t)<<endl;
  }
  return 0;
}
