int max(int a,int b,int c,int d,int e)
{
    if(a>b&&a>c&&a>d&&a>e)
    return(a);
    else if(b>a&&b>c&&b>d&&b>e)
    return(b);
    else if(c>a&&c>b&&c>d&&c>e)
    return(c);
    else if(d>a&&d>b&&d>c&&d>e)
    return(d);
    else
    return(e);
}
int min(int a,int b,int c,int d,int e)
{
      if(a<b&&a<c&&a<d&&a<e)
    return(a);
     else if(b<a&&b<c&&b<d&&b<e)
    return(b);
    else if(c<a&&c<b&&c<d&&c<e)
    return(c);
    else if(d<a&&d<b&&d<c&&d<e)
    return(d);
    else
    return(e);
}
main()
{
     int a[5][5],i,j,t=0;
     for(i=0;i<=4;i++)
     {
                      for(j=0;j<=4;j++)
                      scanf("%d",&a[i][j]);
                      }
     for(i=0;i<=4;i++)
     {
                      for(j=0;j<=4;j++)
                      {
                      if(a[i][j]==max(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4])&&a[i][j]==min(a[0][j],a[1][j],a[2][j],a[3][j],a[4][j]))
                      {
                      printf("%d %d %d",i+1,j+1,a[i][j]);
                      t=1;
                      break;
                      }
                      }
if(t==1)
break;
                      }
                      if(t!=1)
                      printf("not found");

      }
