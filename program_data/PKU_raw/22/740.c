int main()
{
	char dip;
	int a[300]={-1},b,c,d,fir,sec;
	fir=-1;
	sec=-1;
	b=0;
	for(c=0;c<300;c++)
	{
		a[c]=-1;
	}
	do
	{
		scanf("%d%c",&a[b],&dip);
		b++;
	}
	while(dip==','); 
	d=b;
	b=0;
	do
	{
		if(a[b]>fir) 
		{
			c=fir;fir=a[b];sec=c;
		}
		
		else if ((a[b]<fir)&&(a[b]>=sec)) sec=a[b];
		b++;
	}
	while(a[b]!=-1);
	if(d==1) printf("No");
	else if(sec==0||sec==-1) printf("No");
	else printf("%d",sec);
	return 0;
}
