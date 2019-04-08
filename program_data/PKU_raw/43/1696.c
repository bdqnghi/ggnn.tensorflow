int ss(int n)
{
int i,j,t=0;
for(i=2;i*i<=n;i++)
{
if(n%i == 0)
break;
}
if(i*i>n)
return 1;
else
return 0;
}
int main()
{
	int m,a;
	scanf("%d",&m); 
	for(a=3;a<=m/2;a++)
	{           
	   if(ss(a)&&ss(m-a))
	   {
	      printf("%d %d\n",a,m-a);
	   }
	}
	return 0;
}