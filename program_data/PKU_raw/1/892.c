int Factorization(int,int);
int main()
{
    int n=0,num=0;
    cin>>n;
    for(int i=0;i<n;i++)
      {
          cin>>num;
          cout<<Factorization(num,2)+1<<endl;
      }
      return 0;
}


int Factorization(int num,int n)
{
    int count=0;
    for(int i=n;num/i>=i;i++)
       if(num%i==0)
       {
           count++;
           count=count+Factorization(num/i,i);
       }
    return count;
}
