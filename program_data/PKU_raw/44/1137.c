void main()
{
	int reverse(int num);
	int i,a[6],d[6];
	for(i=0;i<6;i++)
	 scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{if (a[i]>0)
	d[i]=reverse(a[i]);
	else d[i]=(-1)*reverse(-a[i]);
	printf("%d\n",d[i]);}
}

int reverse(int num)
{
	int b[7],c[7],j,d,answer;
	for(j=0;j<7;j++)
	{
		b[j]=floor(num/(pow(10,j)));}
	for(j=0;j<6;j++)
	{
		c[6-j]=b[j]-10*b[j+1];}
	c[0]=b[6];
	d=0;
	for(j=0;j<7;j++)
	{
		if(c[j]==0)
			d=d+1;
	else break;}
	answer=0;
	for(j=d-1;j<7;j++)
	{
		answer=answer+pow(10,j-d)*c[j];}
	return answer;
}
