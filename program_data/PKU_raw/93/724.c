int main()
{
int x;
scanf("%d",&x);
if(x%105==0)
{
printf("3 5 7");
}
if(x%105!=0)
{
if(x%21==0)
{
printf("3 7");
}
if(x%15==0)
{
printf("3 5");
}
if(x%35==0)
{
printf("5 7");
}
}
if(x%21!=0&&x%15!=0&&x%35!=0)
{
if(x%3==0)
{
printf("3");
}
if(x%5==0)
{
printf("5");
}
if(x%7==0)
{
printf("7");
}
}
if(x%3!=0&&x%5!=0&&x%7!=0)
{
printf("n");
}
return 0;
}

