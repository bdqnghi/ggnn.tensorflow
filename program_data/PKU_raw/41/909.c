int main()
{
 int a, b,c,d,e,flag = 1;
	 for (a =1;a<=5;a++)
	 	 for(b=1;b<=5;b++)
		  for(c=1;c<=5;c++)
		  for(d=1;d<=5;d++)
		  for(e=1;e<=5;e++)
		  if((e!=2)&&(e!=3)&&(a!=b)&&(a!=c)&&(a!=d)&&(a!=e)&&(b!=c)&&(b!=d)&&(b!=e)&&(c!=d)&&(c!=e)&&(d!=e))
		  {
		  if((e == 1)+(a <= 2) == 1)
		  flag = 0;
		  if((b ==2)+(b <= 2) == 1)
	 	  flag = 0;
		  if((a == 5)+(c <= 2) == 1)
		  	flag = 0;
		  if((c!=1)+(d <= 2) == 1)
		  flag = 0;
		  if((d ==1)+(e <= 2) == 1)
		 flag = 0;
		 if(flag)
		  cout << a <<" "<<b<<" "<<c<<" "<<d<<" "<<e;
		  flag = 1;
		  }
 	return 0;
}