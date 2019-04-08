
int main(int argc, char* argv[])
{   
	int a,b,c,d,e,f,k;
	scanf("%d",&k);
		a=k/100;
        k=k%100;
		b=k/50;
		k=k%50;
		c=k/20;
		k=k%20;
		d=k/10;
		k=k%10;
		e=k/5;
		k=k%5;
		f=k;

	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	
	return 0;
}