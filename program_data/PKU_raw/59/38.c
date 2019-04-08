int main()
{
    int hang[10000],lie[10000],day,n,m,i,j,k,total=0;
    char a[101][101];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%s",a[i]);
    }
    scanf("%d",&m);
    for(day=1;day<m;day++)
    {   k=0;
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
           if(a[i][j]=='@')
           {
              hang[k]=i;
              lie[k]=j;
              k++;
           } 
        }
      }
      for(i=0;i<k;i++)
      {
        if(a[hang[i]-1][lie[i]]!='#')
        {a[hang[i]-1][lie[i]]='@';}
        if(a[hang[i]+1][lie[i]]!='#')
        {a[hang[i]+1][lie[i]]='@';}
        if(a[hang[i]][lie[i]-1]!='#')
        {a[hang[i]][lie[i]-1]='@';}
        if(a[hang[i]][lie[i]+1]!='#')
        {a[hang[i]][lie[i]+1]='@';}
      }
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
         if(a[i][j]=='@')
         {total+=1;}
      }
    }
    printf("%d",total);
    
}
                                                                                                                               
