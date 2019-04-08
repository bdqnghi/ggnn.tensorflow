int main()
{
int n;
scanf("%d",&n);
int m=n/100;
int a=(n-m*100)/50;
int b=(n-m*100-a*50)/20;
int c=(n-m*100-a*50-b*20)/10;
int d=(n-m*100-a*50-b*20-c*10)/5;
int e=(n-m*100-a*50-b*20-c*10-d*5)/1;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",m,a,b,c,d,e);
return 0;
}
