void main()
{
 int n;
scanf("%d",&n);
r(n);
} 

r(int m)
{ 
printf("%d",m%10);
m=m/10;
if(m!=0)
return r(m);
} 