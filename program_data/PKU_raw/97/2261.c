int main()
{
int a,b;
scanf("%d",&a);
b=a/100;
printf("%d\n",b);
a=a-a/100*100;
b=a/50;
printf("%d\n",(b));
a=a-a/50*50;
b=a/20;
printf("%d\n",b);
a=a-a/20*20;
b=a/10;
printf("%d\n",b);
a=a-a/10*10;
b=a/5;
printf("%d\n",b);
a=a-a/5*5;
printf("%d\n",a);
return 0;
}