int main()
{
int mouth[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
int leapyear;
int a,b,c,i;
int d=0;
scanf("%d %d %d",&a,&b,&c);
leapyear=(a%4==0&&a%100!=0||a%400==0);
for(i=0;i<b-1;i++)
{
    d=d+mouth[leapyear][i];
}
d=d+c;
printf("%d",d);
return 0;
}