void jiaogu(int n)//????
{
     if(n==1)cout<<"End";//????
     else
     {
         if(n%2==0)
         {
                cout<<n<<'/'<<2<<'='<<n/2<<endl;jiaogu(n/2);//??
         }
         else
         {
             cout<<n<<'*'<<3<<'+'<<1<<'='<<n*3+1<<endl;jiaogu(n*3+1);//??
         }
     }
}
int main()
{
    int n;
    cin>>n;
    jiaogu(n);//????
    return 0;
}