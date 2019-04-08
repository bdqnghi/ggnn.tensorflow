int PrimeNumber(int p){
    int i; 
    for(i=2;i<=sqrt(p);i++)
    if(p%i==0) 
    return 0;
    return 1;
    }
int main()
{
    int m,j;
    cin>>m;
    for(j=3;j<=m/2;j=j+2)
    {
     if(PrimeNumber(j)&&PrimeNumber(m-j)) cout<<j<<' '<<m-j<<endl;
    
    }

    return 0;
    } 
