
int main()
{
 int a,b,c,d;
 int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
scanf("%d%d%d",&a,&b,&c);
int sum=0,i;
	for(i=0;i<b-1;i++)
	{
		sum=sum+f[i];
	}
if (((a%4==0)&&(a%100!=0))||(a%400==0))
{
	
if(b<3)
{
	d=sum+c;
}
else
{
    d=sum+1+c;
}
}
else
{
	d=sum+c;
}
printf("%d",d);
 return 0;
}

