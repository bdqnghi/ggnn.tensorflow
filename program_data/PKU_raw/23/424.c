int main ()
{
    int n=0;
    char words[100][100],temp; 
    do
    {
         cin>>words[n];
         n++;
         temp=getchar();
    }while (temp!='\n');
    for (int i=1;i<=n-1;++i)
        cout<<words[n-i]<<" ";
    cout<<words[0]<<endl;
    return 0;
}
