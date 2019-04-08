

 
//??????????????????????

int main()
{
    struct s
    {
           int id;
           int ch;
           int ma;
    }s;
    long int n;
    int i=0,j,zong,c=0;
    int a[3]={0},b[3]={0};
    int t;
    scanf("%d",&n);
    for(i=0;i<3;i++)
    {
                    scanf("%d %d %d",&s.id,&s.ch,&s.ma);
                    a[i]=i+1;
                    b[i]=s.ma+s.ch;           
    }
   for(i=0;i<2;i++)
   {
                   if(b[i]>b[1+i])
                   {
                                  t=b[i];b[i]=b[i+1];b[i+1]=t;
                                  t=a[i];a[i]=a[i+1];a[i+1]=t;
                   }
   }
    for(i=3;i<n;i++)
    {
                      scanf("%d %d %d",&s.id,&s.ch,&s.ma);
                      zong= s.ch+s.ma;
                      for(j=0;j<3;j++)
                      {
                                      if(zong>b[j])c++;
                      }
                      if(c==1)
                      {
                             a[0]=s.id;
                             b[0]=zong;
                      }
                      if(c==2)
                      {
                              a[0]=a[1];
                              b[0]=b[1];
                              a[1]=s.id;
                              b[1]=zong;
                      }
                      if(c==3)
                      {
                              a[0]=a[1];
                              a[1]=a[2];
                              a[2]=s.id;
                              b[0]=b[1];
                              b[1]=b[2];
                              b[2]=zong;
                           
                      }
                      c=0;
    }
    for(i=2;i>=0;i--)
    {
                    printf("%d %d\n",a[i],b[i]);
    }
}