int read();
void circle(int t);
void print();
void baoshu(int p,int q);
int n[100],m[100],a[300],ans[100],num,i;
int main()
{
    read();
    for (i=1;i<=num;i++)
    {
        circle(i);
    }
    print();
    return 0;
}
int read()
{
    i=1;
    scanf("%d%d",&n[i],&m[i]);
    while (n[i]!=0&&m!=0)
    {
        i++;
        scanf("%d%d",&n[i],&m[i]);
    }
    num=i-1;
    return 0;
}
void circle(int t)
{
    int j;
    for (j=1;j<=n[t];j++)
    {
        a[j]=1;
    }
    baoshu(n[t],1);
    return;
}
void baoshu(int p,int q)
{
    int zz,j,k,z;
    if (p==1)
    {
        ans[i]=q;
        return;
    }
    else{
    zz=q;
    j=1;
    while (j<m[i])
    {
        j++;
        if (zz<n[i])
        {
            z=zz;
            for (k=zz+1;k<=n[i];k++)
             {
               if (a[k]==1){
                   zz=k;
                   break;
               }
             }
             if (z==zz)
             {
               for (k=1;k<=zz;k++) 
               {
                  if (a[k]==1){
                      zz=k;
                      break;
                  }
               }
             }
        }else {
            for (k=1;k<=n[i];k++) 
            {
               if (a[k]==1){
                   zz=k;
                   break;
               }
            }
        }
    }
    a[zz]=0;
    z=zz;
    for (k=z;k<=n[i];k++)
             {
               if (a[k]==1){
                   zz=k;
                   break;
               }
             }
    if (z==zz)
    {
      for (k=1;k<z;k++)
             {
               if (a[k]==1){
                   zz=k;
                   break;
               }
             }
    }
    baoshu (p-1,zz);
  }
  return;
}
void print()
{
    for (i=1;i<=num;i++)
    {
        printf("%d\n",ans[i]);
    }
    return;
}
