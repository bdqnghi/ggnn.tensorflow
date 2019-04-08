int main()
{
    int m,shu[1000],num[26],length[1000];
    char author[1000][26],maxauthor;
    cin>>m;
    memset(num,0,sizeof(num));
    for(int i=0;i<m;i++)
    {
      cin>>shu[i]>>author[i];
      length[i]=strlen(author[i]);
      for(int j=0;j<length[i];j++)//?????????? 
      num[author[i][j]-'A']+=1;
    }
    int maxnum=0;
    for(int i=0;i<26;i++)
    {
      if(maxnum<num[i])
      maxnum=num[i];//??????????? 
    }
    for(int i=0;i<26;i++)
    {
      if(num[i]==maxnum)//??????????? 
      {
         maxauthor=(char)('A'+i);
         cout<<maxauthor<<endl;
         cout<<maxnum<<endl;
         break;
      }
    }
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<length[i];j++)
      {
         if(author[i][j]==maxauthor)//???????? 
         cout<<shu[i]<<endl;
      }
    } 
    return 0;
}

