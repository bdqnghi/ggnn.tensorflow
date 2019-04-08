void main()
{
	int a,b,c,d,e,f,g,n,m,i;
	int rui(int x);
	int day(int p,int q);
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d%d%d",&e,&f,&g);
	n=day(a,b)+c;
	m=day(e,f)+g;
	for (i=a;i<=e-1;i++)
	{if (rui(i)==0) m=m+365;
		else m=m+366;}
	printf("%d",m-n);
}
int rui(int x)
{
   int z;
   if ((x%4==0&&x%100!=0)||(x%400==0))
	   z=1;
   else z=0;
   return(z);
}
int day(int p,int q)
{
	int l=0;
	switch(q)
	{ case 12:l=l+30;
	  case 11:l=l+31;
	  case 10:l=l+30;
	  case 9:l=l+31;
	  case 8:l=l+31;
	  case 7:l=l+30;
	  case 6:l=l+31;
	  case 5:l=l+30;
   	  case 4:l=l+31;
	  case 3:{ if (rui(p)==0) l=l+28;
		  else l=l+29;}
	  case 2:l=l+31;
	  case 1:l=l+0;
			 }
		  return(l);
}