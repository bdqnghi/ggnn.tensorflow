
    int compare(const void*elem1,const void*elem2)
    {
    return*((int*)(elem2))-*((int*)(elem1));
    }

main()
{
int j;
for(j=1;;j++)
{



    int n,count=0,tout,weit,touq,weiq;
    int t[1010],q[1010];
    scanf("%d",&n);
    if(n==0){break;}
    else
    tout=0,weit=n-1,touq=0,weiq=n-1;
       for(int i=0;i<=n-1;i++)
        {
        scanf("%d",&t[i]);
        }
       for(int i=0;i<=n-1;i++)
        {
        scanf("%d",&q[i]);
        }

    qsort(t,n,sizeof(int),compare);
    qsort(q,n,sizeof(int),compare);

    for(int i=1;i<=n;i++)
      {
          if(t[tout]>q[touq])
          {
          count=count+1;
          tout=tout+1;
          touq=touq+1;
          }
          else if(t[tout]<q[touq])
          {
          weit=weit-1;
          touq=touq+1;
          count=count-1;
          }
          else if(t[tout]==q[touq])
          {
            if(t[weit]>q[weiq])
                {
                count+=1;
                weit-=1;
                weiq-=1;
                }
            else if(t[weit]<q[weiq]||t[weit]==q[weiq])
                {
                if(t[weit]<q[touq])
                {count-=1;
                weit-=1;
                touq+=1;}
                else if(t[weit]==q[touq])
                {
                weit-=1;
                touq+=1;
                }
                }

          }

        }

printf("%d\n",count*200);
}

}