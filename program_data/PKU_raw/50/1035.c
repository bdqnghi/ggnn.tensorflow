int main()
{
	int w,m,d,a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	w=w+12;
	if (w>7) w=w%7;
	if (w==5) printf("1\n");
	for  (m=2;m<=12;m++){
		w=w+a[m-2];
        if (w>7) w=w%7;
	    if (w==5) printf("%d\n",m);
	}
	return 0;
}