
int main(int argc, char *argv[])
{
  int y,m,d,sum=0,i,x;
    scanf("%d%d%d",&y,&m,&d);
    y=y%400+400;
    for (i=1;i<y;i++)
    {
        if (i%4==0&&i%100!=0)
            sum+=2;
        else if (i%100==0&&i%400==0)
            sum+=2;
        else sum+=1;
    }
    for (i=1;i<m;i++)
    {
        if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            sum+=3;
        else if (i==4||i==6||i==9||i==11)
            sum+=2;
        else if (y%4==0&&y%100!=0&&i==2)
            sum+=1;
        else if (y%100==0&&y%400==0&&i==2)
            sum+=1;
        else sum+=0;
    }
    sum+=d;
    x=sum%7;
    switch (x)
    {
        case 1:
        printf("Mon.\n");
        break;
        case 2:
        printf("Tue.\n");
        break;
        case 3:
        printf("Wed.\n");
        break;
        case 4:
        printf("Thu.\n");
        break;
        case 5:
        printf("Fri.\n");
        break;
        case 6:
        printf("Sat.\n");
        break;
        case 0:
        printf("Sun.\n");
        break;
    }
  return 0;
}

