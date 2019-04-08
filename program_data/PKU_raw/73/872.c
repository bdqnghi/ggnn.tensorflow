int main()
{   int max(int q_1,int q_2,int q_3,int q_4,int q_5);
    int min(int p_1,int p_2,int p_3,int p_4,int p_5);
    int a[5][5];
    int i,j,m,n;
    i=0;j=0;
    scanf("%d %d %d %d %d\n",&a[0][0],&a[0][1],&a[0][2],&a[0][3],&a[0][4]);
    scanf("%d %d %d %d %d\n",&a[1][0],&a[1][1],&a[1][2],&a[1][3],&a[1][4]);
    scanf("%d %d %d %d %d\n",&a[2][0],&a[2][1],&a[2][2],&a[2][3],&a[2][4]);
    scanf("%d %d %d %d %d\n",&a[3][0],&a[3][1],&a[3][2],&a[3][3],&a[3][4]);
    scanf("%d %d %d %d %d\n",&a[4][0],&a[4][1],&a[4][2],&a[4][3],&a[4][4]);
    while(i<=4)
    {    m=max(a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
         while(j<=4)
         {    n=min(a[0][j],a[1][j],a[2][j],a[3][j],a[4][j]);
             if(a[i][j]==m&&a[i][j]==n)
             {printf("%d %d %d",i+1,j+1,a[i][j]);i=10;j=10;}
             j++;} 
         j=0;i++;}
         if(i==5)
         printf("not found");
    return 0;
}
      int max(int q_1,int q_2,int q_3,int q_4,int q_5)
      {  int da,k;
          if (q_1<q_2)
          {k=q_1;q_1=q_2;q_2=k;}
          if (q_1<q_3)
         {k=q_1;q_1=q_3;q_3=k;}
          if (q_1<q_4)
        {k=q_1;q_1=q_4;q_4=k;}
          if (q_1<q_5)
        {k=q_1;q_1=q_5;q_5=k;}
        da=q_1;
        return(da);
        }
      int min(int p_1,int p_2,int p_3,int p_4,int p_5)  
      {    int xiao,t;
          if (p_1>p_2)
          {t=p_1;p_1=p_2;p_2=t;}
          if (p_1>p_3)
         {t=p_1;p_1=p_3;p_3=t;}
          if (p_1>p_4)
        {t=p_1;p_1=p_4;p_4=t;}
          if (p_1>p_5)
        {t=p_1;p_1=p_5;p_5=t;}
        xiao=p_1;
        return(xiao);}
              
             