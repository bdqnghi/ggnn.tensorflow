int map[100][100],sum=0,min=1000,rst[100];
main()
{
    int n,i,j,k,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {   for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                scanf("%d",&map[j][k]);
            for(t=n;t>1;t--)                      /*do 't' times*/
            {   for(j=0;j<t;j++)                    /* decrease*/
                    {for(k=0;k<t;k++)
                        {   if(map[j][k]<min)
                            min=map[j][k];
                                 }
                     for(k=0;k<t;k++)
                        {   
                            map[j][k]=map[j][k]-min;
                                 }
                     min=1000;


                     }
                     
                min=1000;
                for(k=0;k<t;k++)                    /* decrease*/
                    {for(j=0;j<t;j++)
                        {   if(map[j][k]<min)
                            min=map[j][k];
                                 }
                     for(j=0;j<t;j++)
                        {
                            map[j][k]=map[j][k]-min;
                                 }

                      min=1000;

                     }
                sum=sum+map[1][1];                  /*delete*/

                for(k=1;k<t-1;k++)
                    map[0][k]=map[0][k+1];
                for(j=1;j<t-1;j++)
                    map[j][0]=map[j+1][0];
                for(j=1;j<t-1;j++)
                for(k=1;k<t-1;k++)
                    map[j][k]=map[j+1][k+1];

                min=1000;

                }
            rst[i]=sum;
            sum=0;
            }
    for(i=0;i<n;i++)
        printf("%d\n",rst[i]);
    }
