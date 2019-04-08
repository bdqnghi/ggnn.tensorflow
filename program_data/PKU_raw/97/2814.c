int main()
{
 int m,a;
 scanf("%d",&m);
 a=m/100;printf("%d\n",a);m=m-a*100;
 a=m/50;printf("%d\n",a);m=m-a*50;
 a=m/20;printf("%d\n",a);m=m-a*20;
 a=m/10;printf("%d\n",a);m=m-a*10;
 a=m/5;printf("%d\n",a);m=m-a*5;
 a=m/1;printf("%d\n",a);m=m-a*1;


   return 0;
}

