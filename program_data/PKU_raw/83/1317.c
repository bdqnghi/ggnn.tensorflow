
int main()
{
    int b[2][10];
    int xuefen=0,i,j,n;
    float zong=0.0;
    float GPA;
    scanf("%d",&n);
    for(i=0;i<=1;i++)
    {
                     for(j=0;j<=n-1;j++)
                     {
                                        scanf("%d",&b[i][j]);
                                        if(i==0)
                                        xuefen=xuefen+b[i][j];
                                        if(i==1)
                                        {
                                               if(b[i][j]>=90&&b[i][j]<=100)
                                               zong=zong+4*b[0][j];
                                                if(b[i][j]>=85&&b[i][j]<=89)
                                               zong=zong+3.7*b[0][j];
                                                if(b[i][j]>=82&&b[i][j]<=84)
                                               zong=zong+3.3*b[0][j];
                                                if(b[i][j]>=78&&b[i][j]<=81)
                                               zong=zong+3.0*b[0][j];
                                                if(b[i][j]>=75&&b[i][j]<=77)
                                               zong=zong+2.7*b[0][j];
                                                if(b[i][j]>=72&&b[i][j]<=74)
                                               zong=zong+2.3*b[0][j];
                                                if(b[i][j]>=68&&b[i][j]<=71)
                                               zong=zong+2*b[0][j];
                                                if(b[i][j]>=64&&b[i][j]<=67)
                                               zong=zong+1.5*b[0][j];
                                                if(b[i][j]>=60&&b[i][j]<=63)
                                               zong=zong+1*b[0][j];
                                        }
                     
                    }
    }
    GPA=(float)zong/xuefen;
     printf("%.2f",GPA);
  
    
}
