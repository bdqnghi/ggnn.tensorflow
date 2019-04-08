main()
{
    int n,h,i=0,j=0,temp,re,iLAST,jLAST;
    int t[1000],q[1000];
    for (h=1;;h++)
    {
        scanf("%d",&n);
        if (n==0)
        break;
        else
        {
            for (i=0;i<n;i++)
            {
                scanf("%d",t+i);
            }
            for (j=0;j<n;j++)
            {
                scanf("%d",q+j);
            }
            for (i=0;i<n;i++)//&#197;&#197;Dòì&#239;&#188;é
            {
                for (j=i;j<n;j++)
                {
                    if (t[j]<t[i])
                    {
                        temp=t[j];
                        t[j]=t[i];
                        t[i]=temp;
                    }
                }
            }
            for (i=0;i<n;i++)//&#197;&#197;Dò&#198;&#235;í&#245;
            {
                for (j=i;j<n;j++)
                {
                    if (q[j]<q[i])
                    {
                        temp=q[j];
                        q[j]=q[i];
                        q[i]=temp;
                    }
                }
            }

            re=0;
            j=0;
            iLAST=n-1;
            jLAST=n-1;
            for (i=0;i<=iLAST;i++)
            {
                if (t[i]>q[j])
                {
                    re++;
                }
                else if (t[i]<q[j])
                {
                    re--;
                    j--;
                    jLAST--;
                }
                else
                {
                    for (;;jLAST--)
                    {
                        if (t[iLAST]>q[jLAST])
                        {
                            re++;
                            iLAST--;
                        }
                        else if (t[iLAST]<q[jLAST])
                        {
                            re--;
                            j--;
                            jLAST--;
                            break;
                        }
                        else
                        {
                            if (t[i]==t[iLAST])
                            break;
                            else
                            {
                                re--;
                                j--;
                                jLAST--;
                                break;
                            }
                        }
                    }
                    if (t[i]==t[iLAST]&&q[j]==q[jLAST])
                    break;
                }
                j++;
            }
            printf("%d\n",200*re);
        }
    }

}
