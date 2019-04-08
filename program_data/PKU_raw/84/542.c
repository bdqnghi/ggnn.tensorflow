void main()
{
	int a,b,c,d,min,max;
	scanf("%d\n%d\n%d",&a,&c,&d);
	min=(d<c)?d:c;
	max=(d>=c)?d:c;
	if(a>2)
	for(;a>=3;a--)
	{ 
		scanf("%d",&b);
		if(b>max){min=max;max=b;}
		else if(b>min)min=b;
	
	}
	printf("%d\n%d",max,min);
}


