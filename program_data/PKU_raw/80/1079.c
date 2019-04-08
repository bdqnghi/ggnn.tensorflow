
int main(int argc, char *argv[])
{
    int f(int y);
    int g(int y,int m,int d);
    int y1,y2,m1,m2,d1,d2,x=0,i;
    scanf("%d%d%d",&y1,&m1,&d1);
    scanf("%d%d%d",&y2,&m2,&d2);
    x=g(y2,m2,d2)-g(y1,m1,d1);
    if (y1!=y2) 
    {for(i=y1;i<=y2-1;i++)
     {
         x+=(365+f(i));
     }
    } 
    printf("%d",x);	
    return 0;
}
int f(int y)
{int x;
x=((y%4==0&&y%100!=0)||(y%400==0)==1) ? 1:0;
if(x==1) return 1;
if(x==0) return 0;
}
int g(int y,int m,int d)
{   
    int t=0,j,mon[13];
    mon[0]=0;mon[1]=mon[3]=mon[5]=mon[7]=mon[8]=mon[10]=mon[12]=31;
    mon[4]=mon[6]=mon[9]=mon[11]=30;mon[2]=28+f(y);
    for(j=1;j<=m;j++)
        t+=mon[j-1];
    t+=d;
    return t;
}
