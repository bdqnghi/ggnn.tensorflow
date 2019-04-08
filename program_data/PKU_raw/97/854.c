int main(int argc, char* argv[])
{   int n;
    
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int e=0;
	int f=0;
	scanf("%d",&n);
    a=(n-n%100)/100;
	b=(n%100-(n%100)%50)/50;
	c=((n%100)%50-((n%100)%50)%20)/20;
	d=(((n%100)%50)%20-(((n%100)%50)%20)%10)/10;
	e=((((n%100)%50)%20)%10-((((n%100)%50)%20)%10)%5)/5;
	f=((((n%100)%50)%20)%10)%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
   
	return 0;
}
