struct mem
{
    int year;
    int month1;
    int month2;    
} mem[205];
int find(int n)
{
    int flag=0;
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        else flag=1;
    }
    return flag;
}
int spp1(int n)
{
    int p=0;
    if(n==1) p=31;
    if(n==2) p=28; 
    if(n==3) p=31; 
    if(n==4) p=30; 
    if(n==5) p=31; 
    if(n==6) p=30; 
    if(n==7) p=31; 
    if(n==8) p=31; 
    if(n==9) p=30; 
    if(n==10) p=31; 
    if(n==11) p=30; 
    if(n==12) p=31;
    return p;  
}
int spp2(int n)
{
    int p=0;
    if(n==1) p=31;
    if(n==2) p=29; 
    if(n==3) p=31; 
    if(n==4) p=30; 
    if(n==5) p=31; 
    if(n==6) p=30; 
    if(n==7) p=31; 
    if(n==8) p=31; 
    if(n==9) p=30; 
    if(n==10) p=31; 
    if(n==11) p=30; 
    if(n==12) p=31;
    return p;  
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&mem[i].year,&mem[i].month1,&mem[i].month2);
        if(find(mem[i].year)==0)//???????
        {
            int p=0;
            if(mem[i].month1>mem[i].month2)
            {
                for(j=mem[i].month2;j<mem[i].month1;j++)
                {
                    p+=spp1(j);
                }
            }
/*
            else if(mem[i].month1==mem[i].month2)
            {
                printf("YES\n");
            }
*/
            else
            {
                for(j=mem[i].month1;j<mem[i].month2;j++)
                {
                    p+=spp1(j);
                }
            }
            if(p%7==0)
            {
                printf("YES\n");    
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            int p=0;
            if(mem[i].month1>mem[i].month2)
            {
                for(j=mem[i].month2;j<mem[i].month1;j++)
                {
                    p+=spp2(j);
                }
            }
/*
            else if(mem[i].month1==mem[i].month2)
            {
                printf("YES\n");
            }
*/
            else
            {
                for(j=mem[i].month1;j<mem[i].month2;j++)
                {
                    p+=spp2(j);
                }
            }
            if(p%7==0)
            {
                printf("YES\n");    
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}

