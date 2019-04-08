
int main(int argc, char* argv[])
{

int a,b,c;
int i;
scanf("%d %d",&a,&b);


for (i=1;i<=50;i++)
{ 
	if(a>b)
	{ c=a;
	  a=b;
	  b=c;}
	else if(b>a)
	 b=b/2;
	else 
	{printf("%d",a);
	break;}
}
return 0;
}