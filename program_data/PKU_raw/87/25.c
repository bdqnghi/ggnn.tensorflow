
int main(){
	int a,b,c,d,e,f;
	int i,j,k,l;
	int h=0;
	for(i=0;;i++)
	{
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0
			&&d==0&&e==0&&f==0)
			break;
		h+=(12-a)*3600+d*3600;
		h-=(b-e)*60;
		h-=(c-f);
		printf("%d\n",h);
		h=0;
	}
	return 0;
}
