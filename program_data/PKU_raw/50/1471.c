int main()
{
	int w0,m,d,dmax[13],w;
	scanf("%d",&w0);
	w=w0;
	for(m=1;m<=12;m++)
	{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12) dmax[m]=31;
		if(m==4||m==6||m==9||m==11) dmax[m]=30;
		if(m==2) dmax[m]=28;
	}
	m=1;
	for(d=1;d<=dmax[m];)
	{
		if(m>12) break;
		if(d==dmax[m])
		{
			d=1;
			m++;
		}
		else
		{
			d++;
		}
		if(w==7) w=1;
		else w++;
		if(d==13&&w==5) printf("%d\n",m);
	}
	return 0;
}