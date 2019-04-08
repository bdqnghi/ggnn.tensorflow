int main()
{
    int n,i=0,k=0;
    int a[6]={0};
    cin >> n;
    do{
      a[i]=(n%10);
      n=(n-a[i])/10;
      i++;
      k++;
      }while(n!=0);
      for(i=0;i<k;i++)
      cout << a[i];
    return 0;
}

