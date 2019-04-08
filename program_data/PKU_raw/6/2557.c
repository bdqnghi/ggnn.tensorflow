
int main(){
    int t;
    cin>>t;
    while(t>0)
    {
              int a[102][102];
              int m,n;
              cin>>m>>n;
              int sum = 0;
              for(int i = 0;i < m;i++){
                      for(int j = 0;j < n;j++)
                      cin>>*(*(a+i)+j);
                      }
              if( m ==1 ) {
                  for(int i = 0;i < n;i++)
                    sum += *(*a+i);
                  } 
              else{           
              for(int i = 0;i < n;i++)
                    sum += *(*a+i);
              for(int i = 1;i < m-1;i++)
                      sum = sum + *(*(a+i)) + *(*(a+i) + n-1);
              for(int i = 0;i < n;i++)
                    sum += *(*(a+m-1) + i);
                    }
              cout<<sum<<endl;
              t--;
     }

    return 0;
}
