int con(int a[])
{
    int num=0,i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            return 0;
        }
    }
    if(a[4]!=2&&a[4]!=3)//E??2.3?
    {
        if(a[4]==1)//A??
        {
            if(a[0]==1||a[0]==2)
            num++;
            else
            return 0;
        }
        if(a[1]==2)//B??
        {
            if(a[1]==1||a[1]==2)
            num++;
            else
            return 0;
        }
        if(a[0]==5)//C??
        {
            if(a[2]==1||a[2]==2)
            num++;
            else
            return 0;
        }
        if(a[2]!=1)//D??
        {
            if(a[3]==1||a[3]==2)
            num++;
            else
            return 0;
        }
        if(a[3]==1)//E??
        {
            if(a[4]==1||a[4]==2)
            num++;
            else
            return 0;
        }
    }
    if(num==2)
      return 1;
    else
    return 0;
}
main()
{
    int i,j,k,l,m,a[5]={3,2,4,1,5};
    for(i=1;i<6;i++)
    {
        a[0]=i;
        for(j=1;j<6;j++)
        {
            a[1]=j;
            for(k=1;k<6;k++)
            {
                a[2]=k;
                for(l=1;l<6;l++)
                {
                    a[3]=l;
                    for(m=1;m<6;m++)
                    {
                        a[4]=m;
                        if(con(a))
                        printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
                    }
                }
            }
        }
    }
}
