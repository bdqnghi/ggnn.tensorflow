int main()
{
int n;
scanf("%d",&n);
if(n>9999)
{printf("00001");}
else if(n>999)
{printf("%d%d%d%d",n%1000%100%10,n%1000%100/10,n%1000/100,n/1000);}
else if(n>99)
{printf("%d%d%d",n%100%10,n%100/10,n/100);}
else if(n>9)
{printf("%d%d",n%10,n/10);}
else 
{printf("%d",n);}
return 0;
}