main()
{
    int *p[6];
    int day0[81],day1[81],day2[81],day3[81],day4[81],day5[81];
    p[0]=day0;
    p[1]=day1;
    p[2]=day2;
    p[3]=day3;
    p[4]=day4;
    p[5]=day5;
    int m,n;//m??????????? n???????
    scanf("%d %d",&m,&n);
    
    int i,j,k;//??????
    for(i=0;i<=n;i++)
    {
        for(j=0;j<81;j++)
        {
                         p[i][j]=0;
        }
        
        //??????????????
    }
    p[0][40]=m;//??????????????
    int add;//??
    for(k=0;k<n;k++)
    {
        for(i=0;i<81;i++)
        {
            add=p[k][i];
            if(i==0||i==8||i==72||i==80)//???????????????3???????
            {
                 if(i==0)
                 {
                     p[k+1][0]+=2*add;
                     p[k+1][1]+=add;
                     p[k+1][9]+=add;
                     p[k+1][10]+=add;
                 }
                 if(i==8)
                 {
                     p[k+1][8]+=2*add;
                     p[k+1][7]+=add;
                     p[k+1][16]+=add;
                     p[k+1][17]+=add;
                 }
                 if(i==72)
                 {
                     p[k+1][72]+=2*add;
                     p[k+1][63]+=add;
                     p[k+1][64]+=add;
                     p[k+1][73]+=add;
                 }
                 if(i==80)
                 {
                     p[k+1][80]+=2*add;
                     p[k+1][70]+=add;
                     p[k+1][71]+=add;
                     p[k+1][79]+=add;
                 }

            }
            if(i%9==0&&i!=0&&i!=72)
            {
                p[k+1][i]+=2*add;
                p[k+1][i-9]+=add;
                p[k+1][i-8]+=add;
                p[k+1][i+1]+=add;
                p[k+1][i+9]+=add;
                p[k+1][i+10]+=add;
            }
            else if((i+1)%9==0)
            {
                p[k+1][i]+=2*add;
                p[k+1][i-9]+=add;
                p[k+1][i-10]+=add;
                p[k+1][i-1]+=add;
                p[k+1][i+8]+=add;
                p[k+1][i+9]+=add;
            }
            else if(i>0&&i<8)
            {
                p[k+1][i]+=2*add;
                p[k+1][i-1]+=add;
                p[k+1][i+1]+=add;
                p[k+1][i+8]+=add;
                p[k+1][i+9]+=add;
                p[k+1][i+10]+=add;
            }
            else if(i>72&&i<80)
            {
                p[k+1][i]+=2*add;
                p[k+1][i-1]+=add;
                p[k+1][i+1]+=add;
                p[k+1][i-8]+=add;
                p[k+1][i-9]+=add;
                p[k+1][i-10]+=add;
            }
            else
            {
                p[k+1][i]+=2*add;
                p[k+1][i-1]+=add;
                p[k+1][i+1]+=add;
                p[k+1][i-8]+=add;
                p[k+1][i-9]+=add;
                p[k+1][i-10]+=add;
                p[k+1][i+8]+=add;
                p[k+1][i+9]+=add;
                p[k+1][i+10]+=add;
            }

        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d",p[n][i*9+j]);
            if(j<8) printf(" ");
            else printf("\n");
        }
    }
  
}