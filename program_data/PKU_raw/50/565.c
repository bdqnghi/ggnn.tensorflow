int main()
{
	int i,d[100],y,a,w;
		int m[100]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		if (i==1)
			d[1]=12;
		if (i>=2){
			d[i]=d[i-1]+m[i-2];}
		}
		for(i=1;i<=12;i++){
			y=w-5;
			a=(d[i]+y)%7;
			if(a==0)
				printf("%d\n",i);
		}
		return 0;
	}