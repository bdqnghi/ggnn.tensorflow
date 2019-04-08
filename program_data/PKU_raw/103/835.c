int main ()
{
    char a[1002]={0};
    cin>>a;
    int count=1;
    for (int i=1;i<=strlen(a);i++)
    {
        if ((a[i]==a[i-1])||(a[i]==a[i-1]+32)||(a[i]==a[i-1]-32))
        {
             count++; 
        }
        else 
        {
             if (a[i-1]>='a'&&a[i-1]<='z')
             {
                  char big=a[i-1]-32;
                  cout<<"("<<big<<","<<count<<")";
                  count=1; 
             }
             else 
             {
                  char big=a[i-1];
                  cout<<"("<<big<<","<<count<<")";
                  count=1;
             }
        }
    }
    

        return 0;
    
}
