int main()
{
    int a,b,d,c,i,k,j,l,y,q,m;
	double x,e,f,h,g,z;
    scanf("%d%d",&a,&b);
	q=1;
	m=0;
	for (c=a;c<=b;c++)
	{
	e=1;
	 x=10;
	 f=0;
	 h=0;
	 l=c;
     k=c;
	 y=1;
    while(1)
	{d=(l-l%10)/10;	
		if (d>=10)
			l=d;
		else 
			break;
		e=e+1;
	}
	
	while (f<=e)
	   {j=k%10;
	   k=(k-j)/10;
	   g=e-f;
	   h=h+pow(x,g)*j;
       f=f+1;
	   }
z=sqrt(c);
	for (i=2;i<=z;i++)
	{if (c%i==0)
	{
	y=0;
	break;
	}
	}
	  if (i>z)
	  y=1;
if (y==1&&h==c&&m==1)
printf(",%d",c);	
if (y==1&&h==c&&m==0)
{printf("%d",c);
q=0;m=1;}

}
if (q!=0)
printf("no\n");

	   	return 0;
}


