int f(int a,int b)
{ 
	if(a==0||b==1)  
		return 1; 
	if(a<0) 
		return 0;
	return f(a-b,b)+f(a,b-1); 
}
int main ()
{
	int t,a,b,i;
scanf("%d",&t);

for(i=0;i<t;i++)
{
	scanf("%d",&a);
	scanf("%d",&b);
	printf("%d\n",f(a,b)); 
}
return 0;
}