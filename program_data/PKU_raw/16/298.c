int main()
{
 int n;
 int a[100]={0},i=0,j;
 cin>>n;
do
 {                 a[i]=n%10;
                 n=n/10;
i++;

                 }while(n!=0);
 for(j=0;j<=i-1;j++)
  {
                  cout<<a[j];
                  }
return 0;
}
