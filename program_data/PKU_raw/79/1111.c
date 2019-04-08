int main()
{
    int n,m;
    int i;
    for(i=0;;i++)
    {
                 scanf("%d %d",&n,&m);
                 if(n==0&&m==0) break;
                    int huo,shu;
                    huo=n;shu=1;
                    int k;int a[1000]; 
                    for(k=1;k<=n;k++)
                         a[k]=1;
                    while(huo>1)
                    {
                                if(k>n)
                                  k=1;
                                if(a[k]==1)
                                {
                                           if(shu%m==0){a[k]=0;huo--;}
                                           shu++;
                                }
                                k++;
                    }
                    int l;
                    for(l=1;l<=n;l++)
                    if(a[l]==1)
                    printf("%d\n",l);
    }
}
