float grade(int*p2)
{
	float n;
	if(*p2>=90&&*p2<=100)
		n=4.0f;
	else if(*p2>=85&&*p2<=89)
		n=3.7f;
	else if(*p2>=82&&*p2<=84)
		n=3.3f;
	else if(*p2>=78&&*p2<=81)
		n=3.0f;
	else if(*p2>=75&&*p2<=77)
		n=2.7f;
	else if(*p2>=72&&*p2<=74)
		n=2.3f;
	else if(*p2>=68&&*p2<=71)
		n=2.0f;
	else if(*p2>=64&&*p2<=67)
		n=1.5f;
	else if(*p2>=60&&*p2<=63)
		n=1.0f;
	else
		n=0;
	return (n);
}
void main()
{
	int i,n,num=0,a[10],b[10],*p1,*p2;
	float c[10];
	float GPA=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	p1=&a[0];p2=&b[0];
	for(i=0;i<n;i++)
		{
			c[i]=(*p1)*(grade(p2));
			p1++;
			p2++;
		}
	for(i=0;i<n;i++)
		{
			GPA+=c[i];
			num+=a[i];
		}
	printf("%.2f\n",GPA/num);
	
}