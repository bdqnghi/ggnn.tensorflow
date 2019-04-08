int main()
{
    int k,a[100][2],c[100][100][100],i,j,p,s[100];
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
       scanf("%d%d",&a[i][0],&a[i][1]);
       for(j=0;j<a[i][0];j++)
        for(p=0;p<a[i][1];p++)
          scanf("%d",&c[i][j][p]);                
    }
    for(i=0;i<k;i++)
    {
      s[i]=0;
      for(j=0;j<a[i][1];j++)
       s[i]+=c[i][0][j];
      for(j=0;j<a[i][1];j++)
       s[i]+=c[i][a[i][0]-1][j];
      for(j=1;j<a[i][0]-1;j++)
       s[i]+=c[i][j][0];
      for(j=1;j<a[i][0]-1;j++)
       s[i]+=c[i][j][a[i][1]-1];
      printf("%d\n",s[i]);                 
    }

     return 0;
}