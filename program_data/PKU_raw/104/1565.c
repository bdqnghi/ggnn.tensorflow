int main(){
  int i,j;
  for (cin>>i>>j;i!=j;){
    while (i>j) i/=2;
    while (j>i) j/=2;
  }
  cout<<j<<endl;
}