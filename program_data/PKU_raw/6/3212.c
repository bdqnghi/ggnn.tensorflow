int summer();

int main(void)
{
    int counter,times,patty;
    scanf("%d",&times);
    
    for(counter=0;counter<times;counter++)
    {
    patty=summer();
    printf("%d\n",patty);
    }


    return 0;
}    

int summer()
{
    int m,n;
    int line,row;
    
    scanf("%d%d",&line,&row);
    int fib[SIZE][SIZEE];
    
    for(m=0;m<line;m++)
    {
                    for(n=0;n<row;n++)
                    {
                                    scanf("%d",&fib[m][n]);
                    }
    }
    int sum=0;
    int i;
    for(i=0;i<row;i++)
    {
                      sum=sum+*((*fib)+i)+*(*(fib+line-1)+i);
    }
    
    for(i=1;i<line-1;i++)
    {
                        sum=sum+*(*(fib+i))+*(*(fib+i)+row-1);
    }       
              
    return sum;
}