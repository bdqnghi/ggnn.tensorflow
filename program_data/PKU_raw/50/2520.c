void panduan(int i,int num);
int i, num;
main()
{
    int w;
    scanf("%d",&w);
    i=1;
    num=(13+w-1);
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+28;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
    num=num+31;
    panduan( i, num);i++;
    num=num+30;
    panduan( i, num);i++;
}

void panduan(int i,int num)
{

    if(num%7==5)
    {printf("%d\n",i);
    }
}
