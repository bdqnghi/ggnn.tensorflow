
int step(int a,int b)
{
	int i,n;
	if(a==b)return a;
	else
	{
	    for(i=1;pow(2,i)-1<b;i++){}n=i;
	    b=pow(2,n-2)+floor((b-pow(2,n-1))/2);
		if(a<=b)step(a,b);
		else step(b,a);
	}
}

int main()
{
	int x1,x2;
	scanf("%d%d",&x1,&x2);
	if(x1<=x2)printf("%d\n",step(x1,x2));
	else printf("%d\n",step(x2,x1));
	return 0;
}
