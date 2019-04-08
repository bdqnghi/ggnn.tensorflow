

struct info{
       char name[20];
       int qm;
       int py;
       char gb;
       char xb;
       int lw;
       int money;
}student[120];

int ysj( int a )
{
    if ( student[a].qm > 80 && student[a].lw >= 1 )
       return 8000;
    else
       return 0;
} 
int wsj( int a )
{
    if ( student[a].qm > 85 && student[a].py > 80 )
        return 4000;
    else 
        return 0;
}
int cjj( int a )
{
    if ( student[a].qm > 90 )
        return 2000;
    else 
        return 0;
}
int xbj( int a )
{
    if ( student[a].qm > 85 && student[a].xb == 'Y')
        return 1000;
    else 
        return 0;
}
int bjj( int a )
{
    if ( student[a].py > 80 && student[a].gb == 'Y')
        return 850;
    else 
        return 0;
}
int main()
{
    int n,k;
    int max = 0;
    int sum = 0;
    char ch1,ch2;
    scanf("%d",&n);
    if ( n >=0 )
    for ( int i=0; i<n; i++ )
    {
         scanf("%c",&ch1);
         scanf("%s%d%d%c%c%c%c%d",student[i].name,&student[i].qm,&student[i].py,&ch1,&student[i].gb,&ch2,&student[i].xb,&student[i].lw);
         student[i].money = ysj(i) + wsj(i) + cjj(i) + xbj(i) + bjj(i);
         sum += student[i].money;
         if ( student[i].money > max )
         {
             max = student[i].money;
             k = i;
         }
         
    }
    printf("%s\n%d\n%d\n",student[k].name,max,sum);
    return 0;
}