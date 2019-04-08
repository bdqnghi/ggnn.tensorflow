int main()
{
    int a,b;
    scanf("%d",&a);
    int r1,r2,r3,r4;
    if(a>9999)b=5;
    else if(a>999)b=4;
    else if(a>99)b=3;
    else if(a>9)b=2;
    else b=1;
    switch(b)
    {
        case 1:printf("%d",a);break;
        case 5:printf("00001");break;
        case 2:r3=a/10;r4=a-r3*10;printf("%d%d",r4,r3);break;
        case 3:r2=a/100;r3=(a-r2*100)/10;r4=a-r2*100-r3*10;printf("%d%d%d",r4,r3,r2);break;
        case 4:r1=a/1000;r2=(a-r1*1000)/100;r3=(a-r1*1000-r2*100)/10;r4=(a-r1*1000-r2*100-r3*10);printf("%d%d%d%d",r4,r3,r2,r1);break;
    }
}
