char a[500][103];
void chuli(int i,int la)
{
      int j,k,l,flag=0;
      for (j=0;j<la-1;j++)
      {
          if (a[i][j]=='(')
          {
                           k=j+1;
                           while (a[i][k]!='('&&a[i][k]!=')'&&k<la) k++;
                           if (a[i][k]==')')
                           {
                                            flag=1;
                                            a[i][j]=a[i][k]=' ';
                           }      //?????? 
          }
      }
      if (flag==1) chuli(i,la);   //???????????,????? 
}
int main()
{
    int n=0,la[500]={0},i,j;
    char c,b[500][103];
    while(cin>>c)
    {
                      while (c!='\n')
                      {
                            a[n][la[n]]=b[n][la[n]]=c;
                            la[n]++;
                            c=getchar();
                      }
                      n++;
    }     //?? 
    for (i=0;i<n;i++) chuli(i,la[i]); //?? 
    for (i=0;i<n;i++)
    {
        for (j=0;j<la[i];j++) cout<<b[i][j];
        cout<<endl;
        for (j=0;j<la[i];j++)
        {
            if (a[i][j]=='(') cout<<'$';
            else if (a[i][j]==')') cout<<'?';
            else cout<<' ';
        }
        if (i!=n-1) cout<<endl;
    }   //?? 
    return 0;
}
          
                        
