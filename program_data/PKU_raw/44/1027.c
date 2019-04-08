int main()
{
int a[6];
int i;
int reverse(int num);
for(i=0;i<6;i++)
scanf("%d",&a[i]);
for(i=0;i<6;i++)
printf("%d\n",reverse(a[i]));
return 0;
}
int reverse(int z)
{
int b=0;
if(z>=10||z<=-10)
{
while(z>=10||z<=-10)
	{
        b=b*10+z%10;
		z/=10;
	}
	b=b*10+z;
return (b);
}
else 
{
b=z;
return(b);
}
}
