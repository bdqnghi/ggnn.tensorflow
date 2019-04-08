
int main ()
{
    int d[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
    int mon=0,w=12,n,i;
    scanf("%d",&n);
    w=w+n;
    if(w%7==5)
    {printf("%d\n",mon+1);}
    if((w+d[1])%7==5)
    {printf("%d\n",mon+2);}
    if((w+d[2])%7==5)
    {printf("%d\n",mon+3);}
    if((w+d[3])%7==5)
    {printf("%d\n",mon+4);}
    if((w+d[4])%7==5)
    {printf("%d\n",mon+5);}
    if((w+d[5])%7==5)
    {printf("%d\n",mon+6);}
    if((w+d[6])%7==5)
    {printf("%d\n",mon+7);}
    if((w+d[7])%7==5)
    {printf("%d\n",mon+8);}
    if((w+d[8])%7==5)
    {printf("%d\n",mon+9);}
    if((w+d[9])%7==5)
    {printf("%d\n",mon+10);}
    if((w+d[10])%7==5)
    {printf("%d\n",mon+11);}
    if((w+d[11])%7==5)
    {printf("%d\n",mon+12);}
    
    
} 