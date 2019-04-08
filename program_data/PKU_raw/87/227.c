int main()
{
	int a,b,c,d,e,f,h,m,s,sum,i;
	for(i=0;i<10000;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		h=3600*(d+12-a);
		m=60*(e-b);
		s=f-c;
		sum=h+m+s;
		printf("%d\n",sum);
	}	
	return 0;
}