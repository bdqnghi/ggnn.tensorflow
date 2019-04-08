
int main()
{
	int A,B,C,a,b,c,d,e,f,g,h,i,j,k,l,m;
	scanf("%d%d%d",&A,&B,&C);
	a=31;
	if((A%4==0 && A%100!=0) || A%400==0)
			b=29;
	else
		b=28;
	c=31;
	d=30;
	e=31;
	f=30;
	g=31;
	h=31;
	i=30;
	j=31;
	k=30;
	l=31;
	if(B==1)
		m=C;
    if(B==2)
		m=C+a;
	if(B==3)
		m=C+a+b;
	if(B==4)
		m=C+a+b+c;
	if(B==5)
		m=C+a+b+c+d;
	if(B==6)
		m=C+a+b+c+d+e;
    if(B==7)
		m=C+a+b+c+d+e+f;
    if(B==8)
		m=C+a+b+c+d+e+f+g;
    if(B==9)
		m=C+a+b+c+d+e+f+g+h;
    if(B==10)
		m=C+a+b+c+d+e+f+g+h+i;
    if(B==11)
		m=C+a+b+c+d+e+f+g+h+i+j;
    if(B==12)
		m=C+a+b+c+d+e+f+g+h+i+j+k;
	printf("%d\n",m);
	return 0;
}