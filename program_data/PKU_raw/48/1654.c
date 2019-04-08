int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
        struct student
    {
           int nima[9][9];
    };
    struct student stu[4];
    for(int i=1;i<=n;i++)
    { 
            for(int x=0;x<9;x++)
            {
                    for(int y=0;y<9;y++)
                    {
                         stu[i-1].nima[x][y]=0;
                    }
            }              
                   if(i==1)
                   { 
                    stu[i-1].nima[4][4]=2;stu[i-1].nima[4][3]=1;stu[i-1].nima[3][4]=1;stu[i-1].nima[3][3]=1;
                    stu[i-1].nima[5][3]=1;stu[i-1].nima[3][5]=1;stu[i-1].nima[4][5]=1;stu[i-1].nima[5][5]=1;
                    stu[i-1].nima[5][4]=1;
                   }
            else
            for(int x=4-i;x<5+i;x++)
            {
                    for(int y=4-i;y<5+i;y++)
                    {
                         stu[i-1].nima[x][y]=2*stu[i-2].nima[x][y]+stu[i-2].nima[x-1][y-1]+stu[i-2].nima[x-1][y]
                         +stu[i-2].nima[x-1][y+1]+stu[i-2].nima[x][y-1]+stu[i-2].nima[x][y+1]+stu[i-2].nima[x+1][y-1]
                         +stu[i-2].nima[x+1][y]+stu[i-2].nima[x+1][y+1];
                    }
            }    
    }
    for(int x=0;x<5;x++)
            {
                    for(int y=0;y<9;y++)
                    {   
                       if(y==8)printf("%d\n",m*stu[n-1].nima[x][y]);
                       else  printf("%d ",m*stu[n-1].nima[x][y]);
                    }
            }    
    for(int x=3;x>=0;x--)
            {
                    for(int y=0;y<9;y++)
                    {   
                       if(y==8)printf("%d\n",m*stu[n-1].nima[x][y]);
                       else  printf("%d ",m*stu[n-1].nima[x][y]);
                    }
            }    
  
} 
