int num(int n)
{
    if (n==1)
        return 1;
    else if (n%2==0)
    {
         printf("%d/2=%d\n",n,n/2);
         num(n/2);
    }
    else
    {
         printf("%d*3+1=%d\n",n,n*3+1);
         num(n*3+1);
    }
}  
int main()
{  
    int n;
    cin >> n;
    num(n);
    cout << "End";
    return 0;
}  
