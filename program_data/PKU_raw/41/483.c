int a[6];
int judge(int a,int b,int c,int d,int e)
{
    int i,g[6];
    for (i=1;i<=5;i++) g[i]=0;
    g[a]=1; g[b]=1; g[c]=1; g[d]=1; g[e]=1;
    for (i=1;i<=5;i++)
    if (g[i]==0) return 0;
    return 1;
}
int pd(int x)
{
    if (x==1) if (a[5]==1) return 1;
    else return 0;
    
    if (x==2) if (a[2]==2) return 1;
    else return 0;
    
    if (x==3) if (a[1]==5) return 1;
    else return 0;
    
    if (x==4) if (a[3]!=1) return 1;
    else return 0;
    
    if (x==5) if (a[4]==1) return 1;
    else return 0;
}
main()
{     int i,flag;
      for (a[1]=1;a[1]<=5;a[1]++)
      for (a[2]=1;a[2]<=5;a[2]++)
      for (a[3]=1;a[3]<=5;a[3]++)
      for (a[4]=1;a[4]<=5;a[4]++)
      for (a[5]=1;a[5]<=5;a[5]++)
      
      if ((judge(a[1],a[2],a[3],a[4],a[5])>0)&&(a[5]!=2)&&(a[5]!=3))
      { flag=0;
        for (i=1;i<=5;i++)
        { if (a[i]==1) if (pd(i)==0) flag=1;
          if (a[i]==2) if (pd(i)==0) flag=1;
          if (a[i]==3) if (pd(i)==1) flag=1;
          if (a[i]==4) if (pd(i)==1) flag=1;
          if (a[i]==5) if (pd(i)==1) flag=1;}
        if (flag==0) printf("%d %d %d %d %d\n",a[1],a[2],a[3],a[4],a[5]);
        }
        }
