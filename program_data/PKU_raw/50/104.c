int main (){
	int w,n=13,m,i;
	scanf("%d",&w);
    int	d[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	for (i=1;i<=12;i++){
		m=0;
		n+=d[i-1];
		m=n%7+w-1;
		if (m>7)
			m=m%7;
		if (m==5)
			printf("%d\n",i);
	}
	return 0;
}
