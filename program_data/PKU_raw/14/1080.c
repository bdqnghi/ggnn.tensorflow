int main()
{
struct student
{int ID;
int YW;
int SX;
};
struct student stu[100000];
int ZF[100000];
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
        scanf("%d",&stu[i].ID);
        scanf("%d",&stu[i].YW);
        scanf("%d",&stu[i].SX);
        ZF[i]=stu[i].YW+stu[i].SX;
}
int a=0,b=0,c=0,A=0,B=0,C=0;
for(int i=0;i<n;i++)
{
        if(ZF[i]>a)
        {
        c=b;C=B;b=a;B=A;a=ZF[i];A=i;}
        else if(ZF[i]>b)
        {c=b;C=B;b=ZF[i];B=i;}
        else if(ZF[i]>c)
        {c=ZF[i];C=i;}
}
printf("%d %d\n",stu[A].ID,a);
printf("%d %d\n",stu[B].ID,b);
printf("%d %d\n",stu[C].ID,c);
getchar();
getchar();
}
