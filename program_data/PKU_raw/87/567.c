int main()
{
	int a,b,c,j,e,f;
	int g=0,h=0,i=0;
	int total=0;
	int n=1000;
    for(i=0;i<n;i++){
	scanf("%d %d %d %d %d %d", &a, &b, &c, &j, &e, &f);
	if(a!=0){
    i=f-c+60;
    h=e-b+60-1;
    g=j-a+12-1;
    h=60*h;
	g=3600*g;
	total=g+h+i;
	printf("%d\n", total);
	}
	if(a=0){
	 break;
	}
	}
	 return 0;
}
