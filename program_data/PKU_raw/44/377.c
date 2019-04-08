int reverse(int x);

int main(){
	int i,m;
	for(i=0;i<6;i++)
	{
		scanf("%d",&m);
		m=reverse(m);
		printf("%d\n",m);
	}
	return 0;
}

int reverse(int x){
	int  j,p;
	p=x;
	int q;
	for(j=0;;j++)
	{
		p=p/10;
		if(p==0)
		{
			q=j;
			break;
		}
	}
	p=0;
	for(j=0;j<q+1;j++)
	{
		p+=(x%10)*pow(10,q-j);
		x=x/10;
	}
	return p;
}
