int sum;

void f(int x,int i){
     if(x == 1) sum++;
     else{
          for(;i <= x;i++)
                  if(x%i == 0) f(x/i,i);
          
          }

}

int main(){
    int n;
    cin>>n;
    while(n>0){
          
          int x = 0,i,ans = 1;
          cin>>x;
          for(i = 2;i*i < x;i++){
                if( x%i == 0) {
                    sum = 0;
                    f(x/i,i);
                    ans+=sum;
                    }
                }
          cout<<ans<<endl;
          n--;  
}

    return 0;
    }
