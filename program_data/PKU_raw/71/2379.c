int mo1=31,mo2=28,mo3=31,mo4=30,mo5=31,mo6=30,mo7=31,mo8=31,mo9=30,mo10=31,mo11=30,mo12=31;
int f(int x)
{
    if(x==1) return 0;
    if(x==2) return (mo1);
    if(x==3) return (mo1+mo2);
    if(x==4) return (mo1+mo2+mo3);
    if(x==5) return (mo1+mo2+mo3+mo4);
    if(x==6) return (mo1+mo2+mo3+mo4+mo5);
    if(x==7) return (mo1+mo2+mo3+mo4+mo5+mo6);
    if(x==8) return (mo1+mo2+mo3+mo4+mo5+mo6+mo7);
    if(x==9) return (mo1+mo2+mo3+mo4+mo5+mo6+mo7+mo8);
    if(x==10) return (mo1+mo2+mo3+mo4+mo5+mo6+mo7+mo8+mo9);
    if(x==11) return (mo1+mo2+mo3+mo4+mo5+mo6+mo7+mo8+mo9+mo10);
    if(x==12) return  (mo1+mo2+mo3+mo4+mo5+mo6+mo7+mo8+mo9+mo10+mo11);
}
int main()
{
    int n,m;
    scanf("%d",&n);
    int y,m1,m2;
    while(n--)
    {
    scanf("%d %d %d",&y,&m1,&m2);
    mo2=28;
    if (y%400==0||(y%4==0)&&(y%100!=0))
    mo2=29;
    if(m1>m2)
    m=f(m1)-f(m2);
    else m=f(m2)-f(m1);
    if(m%7==0)
    printf("YES\n");
    else printf("NO\n");
    }
}

