int main()
{
    int n;
    scanf("%d",&n);
    int time,jump,broken,i,j,b,sum[n+1],brokenjump[21];
    for (i=1,broken=0;i<=n;i++)
    {
        scanf ("%d",&broken);
        if (broken==0)
        {
                      sum[i]=60;
                      continue;
                      }
        for (j=1;j<=broken;j++)
        {
            scanf ("%d",&brokenjump[j]);
            }   
        for (time=0,jump=0,b=1;time<60;)
        {
            if ((jump == brokenjump[b])&& b<=broken)
            {
                       time=time+3;
                       b++;
            }
            else {
                       jump++;
                       time++;
                       }
        }
        sum[i]=jump;
    }
    for (i=1;i<=n;i++)
    {
        printf("%d\n",sum[i]);
        }
        return 0;
}
     