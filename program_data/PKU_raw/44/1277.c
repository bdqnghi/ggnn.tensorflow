int fanxu(int x);
int main(int argc, char* argv[])
{
	int n=0,t=0;
	while(1)
	{
		scanf("%d",&n);
		if(n>=0)
		{
			n=fanxu(n);
		}
		else
		{
			n=-1*n;
			n=fanxu(n);
			n=-1*n;
		}
		printf("%d\n",n);
		t++;
		if(t==6) break;
	}
	return 0;
}
int fanxu(int x)
{
	int sz[5],y=0,i=0;
	sz[0]=x%10;
	sz[1]=(x%100)/10;
	sz[2]=(x%1000)/100;
	sz[3]=(x%10000)/1000;
	sz[4]=x/10000;
	y=sz[0]*10000+sz[1]*1000+sz[2]*100+sz[3]*10+sz[4];
	for(i=1;i<=5;i++)
	{
		if(y%10==0)
		{
			y=y/10;
		}
	}
	return y;
}
