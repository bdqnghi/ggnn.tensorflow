void main()
{int m,flag=0;
scanf("%d",&m);
if(m%3==0) printf("3");
if(m%5==0) {if(m%3==0) printf(" ");printf("5");}
if(m%7==0) {if(m%3==0||m%5==0) printf(" ");printf("7");}
else if(m%3!=0&&m%5!=0)putchar('n');}
