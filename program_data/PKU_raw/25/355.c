int a[102]={0},ans[102]={0};
int j;
void mult(int a[])
{
    for(j=0;j<101;j++)
    {
        a[j]=a[j]*2;}
    for(j=0;j<101;j++){
        a[j+1]=a[j+1]+a[j]/10;
        a[j]=a[j]%10;}

}
int main()
{
    int n,i;

    cin>>n;
    a[0]=1;
    for(i=0;i<n;i++)
    {
        mult(a);
    }
   int k=100;
   while(a[k]==0) k--;
   for(i=k;i>=0;i--) cout<<a[i];
   return 0;

}
