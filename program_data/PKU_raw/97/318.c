
int main(int argc, char* argv[])
{
    int k;
	scanf("%d",&k);
	int a=0,b=0,c=0,d=0,e=0,f=0;
	if((k/100)!=0)
	{
       a=k/100;
       k=k-a*100;	
	}
	if((k/50)!=0)
	{
		b=k/50;
		k=k-b*50;
	}
	if((k/20)!=0)
	{
		c=k/20;
		k=k-c*20;
	}
	if((k/10)!=0)
	{
		d=k/10;
		k=k-d*10;
	}
	if((k/5)!=0)
	{
		e=k/5;
		k=k-e*5;
	}
	if(k!=0)
	{
		f=k;
	}
	printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);		
    printf("%d\n",d);		
    printf("%d\n",e);		
    printf("%d\n",f);
return 0;
}

