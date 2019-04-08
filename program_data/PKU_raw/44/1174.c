void main()
{
	int reverse(int num);
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",reverse(a),reverse(b),reverse(c),reverse(d),reverse(e),reverse(f));
}
int reverse(int num)
{
	int a[5],b[5];
	int i,j,t,NUM,flag,top,butt;
	if(num<0)
	{num=-num;
	flag=1;}
	else flag=0;
	a[0]=num/10000;
	a[1]=(num-10000*a[0])/1000;
    a[2]=(num-10000*a[0]-1000*a[1])/100;
	a[3]=(num-10000*a[0]-1000*a[1]-100*a[2])/10;
	a[4]=num-10000*a[0]-1000*a[1]-100*a[2]-10*a[3];
	b[0]=1000;
	for(i=0;i<4;i++)
		b[i+1]=b[i]/10;
	for(i=0;i<5;i++)
		if(a[i]!=0)
			break;
	top=i-1;
	butt=4;
	while(top<=butt)
	{
		t=a[top];
		a[top]=a[butt];
		a[butt]=t;
		top=top+1;
		butt=butt-1;}
	NUM=0;
	for(j=i-1;j<5;j++)
		NUM=a[j]*b[j]+NUM;
	if(flag==1)
		NUM=-NUM;
	return(NUM);}
