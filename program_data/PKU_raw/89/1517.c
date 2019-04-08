int main()
{
    int n;
    int per[20000][2];
    scanf("%d",&n);
    int k;
    int i,j;
    for(k=0;;k++)
       {
           for(j=0;j<=1;j++)
           {
               scanf("%d",&per[k][j]);
           }
        if(per[k][0]==0&&per[k][1]==0)
        break;
       }
       int sign=0;
       int flag=0;
    for(k=0;k<=n-1;k++)
    {
        for(i=0;;i++)
        {
            if(per[i][0]==0&&per[i][1]==0)
            {
                if(sign==n-1)
                {
                    printf("%d",k);
                    flag++;
                    break;
                }
                if(sign<n-1)
                {
                    printf("NOT FOUND");
                    break;
                }

            }
            else if(k==per[i][1])
               sign++;
            else if(k==per[i][0]&&(per[i][0]!=0||per[i][1]!=0))
               {
                break;
               }
        }
        if(k==n-1&&flag==0)
        printf("NOT FOUND");
        sign=0;
    }
    }