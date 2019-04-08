
int N[MAX];

int x_iter(int x){
  if(N[x-1]==1) return x;
  else{
    N[x-1]=1;
    x_iter(x/2);
  }
}

int main(){
  int x,y;
  cin>>x>>y;
  memset(N,0,sizeof(N));
  x_iter(x);
  cout<<x_iter(y);
  return 0;
}