
int main()
{
    int n=0, i, j, len1, len2, count=0, sum=0;
    char str[100][100];
    while(cin>>str[++n])
      if(str[n][0]=='0')
       break;
    n--;
    //cout<<str[n-1]<<endl<<str[n]<<endl;
    for(i=1;i<n-1;i++)
    {
      if(i!=1) cout<<" ";
      if(strcmp(str[i],str[n-1])==0)
        cout<<str[n];
      else
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
