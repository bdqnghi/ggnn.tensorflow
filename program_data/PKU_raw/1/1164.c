
int is_bottom,max;
int div_foo(int n,int min);

int main(){

  int N;
  cin>>N;
  for(int index=0;index<N;index++){
    int k;
    cin>>k;
    is_bottom=0;
    cout<<div_foo(k,2)+1<<endl;
  }
  
  return 0;
}

int div_foo(int n,int min){
  int cal=0;

  for(int iter=min;iter<=sqrt(n);iter++){
    if(!(n%iter)){
      cal++;
      int f1=n/iter,f2=iter,g;
      g=div_foo(f1,f2);
      cal+=g;
    }
  }
  return cal;
}
