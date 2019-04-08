typedef struct 
{
        char name[100];
        int qm,py;
        char gb,xb;
        int lw;
        int jxj;
} student;
student cl[200];
int sum,n;
void wsj(int k);
void yxj(int k);
void xbj(int k);
void gxj(int k);
void ysj(int k)
{
     if(cl[k].qm>80&&cl[k].lw>0)
     {
     cl[k].jxj+=8000;
     sum+=8000;
     }
     wsj(k);
}
void wsj(int k)
{
     if(cl[k].qm>85&&cl[k].py>80)
     {
     cl[k].jxj+=4000;
     sum+=4000;
     }
     yxj(k);
}
void yxj(int k)
{
     if(cl[k].qm>90)
     {
     cl[k].jxj+=2000;
     sum+=2000;
     }
     xbj(k);
}
void xbj(int k)
{
     if(cl[k].qm>85&&cl[k].xb=='Y')
     {
     cl[k].jxj+=1000;
     sum+=1000;
     }
     gxj(k);
}
void gxj(int k)
{
     if(cl[k].py>80&&cl[k].gb=='Y')
     {
     cl[k].jxj+=850;
     sum+=850;
     }
}
int main()
{
    int i,max=0,maxn;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%s %d %d %c %c %d",cl[i].name,&cl[i].qm,&cl[i].py,&cl[i].gb,&cl[i].xb,&cl[i].lw);
        ysj(i);
        if(cl[i].jxj>max)
        {
                         max=cl[i].jxj;
                         maxn=i;
        }
    }
    printf("%s\n%d\n%d",cl[maxn].name,cl[maxn].jxj,sum);
   
    return 0;
}     
