int main()
{
	int n;
	scanf("%d\n",&n);
	void jg(int x);
	jg(n);
	return 0;
}
void jg(int x)
{
	if(x>1&&x%2==1){printf("%d*3+1=%d\n",x,x*3+1);jg(x*3+1);}
	if(x%2==0){printf("%d/2=%d\n",x,x/2);jg(x/2);}
	if(x==1)printf("End");
}

