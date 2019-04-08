void revers(int x);
int main()
{
 int a,i;
 for(i=0;i<6;i++)
 {
	 scanf("%d",&a);
	 if(a<0)
	 {a=-a;
	 printf("-");}
	 revers(a);
 }
 return 0;
}
void revers(int x)
{
	int start(int p);
	x=start(x);
	while(x!=0)
	{
		printf("%d",x%10);
		x=x/10;
	}
	printf("\n");
}
int start(int p)
{
	while(p%10==0)
	{
		p=p/10;
	}
	return p;
}
