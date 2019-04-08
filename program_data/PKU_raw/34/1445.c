int main()
{
int m,n=0,y=0;
int i;
scanf("%d",&m);
n=m;
y=n;
    for(i=0;i<100;i++)
{
if(y==0||y==1)
{
printf("End\n");
break;
}
else
{
if(n%2==0)
{
            y=n/2;
printf("%d/2=%d\n",n,y);
n=y;
}
else 
{
y=n*3+1;
printf("%d*3+1=%d\n",n,y);
n=y;
}
//printf("%d\n",y);
}
}
return 0;
}
