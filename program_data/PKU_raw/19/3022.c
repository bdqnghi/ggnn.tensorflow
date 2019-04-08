int main()
{
  char s[20][100]={0},a[100]={0},b[100]={0},c;
  int i=0,j=0,n1=0,n2=0,m=0;
  for(i=0;i<20;i++)//?? 
  {
        cin>>s[i];
            c=getchar();
            if(c=='\n')
            {
                m=i;
            break;
            }
  }
cin>>a;
cin>>b;
    n1=strlen(a);
    for(i=0;i<=m;i++)//?????? 
    {
        n2=0;
        for(j=0;j<n1;j++)
        {
            if(s[i][j]==a[j]) n2=n2+1;
            else n2=n2;
        }
        if(n1!=n2) continue;
        for(j=0;j<100;j++)
        {
            s[i][j]=b[j];
        }
    }
    cout<<s[0];
    for(i=1;i<=m;i++)//?? 
    {
        cout<<" "<<s[i];
    }
    return 0;
}
        
            
            
            
        
            
