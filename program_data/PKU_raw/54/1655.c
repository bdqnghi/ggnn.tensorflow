
int n , k;
int sum = 0;
int cnt = 1;

void number ( int );

int main ()
{
    int i;
    
    cin >> n >> k;
    
    for ( i = 1; i < INT_MAX; i++ )
    {
          number( n*i+k);
          if ( sum != 0 )
               break;
    }
    
    cout << sum << endl;
    
    return 0;
}

void number ( int a )
{
     if ( a % (n-1) != 0 )
     {
          cnt = 1;
          sum = 0;
          return;
     }
     else
     {
        
         sum = a / (n-1) * n + k;
         cnt++;
         if ( cnt == n )
              return;
         number(sum);
     }
}
