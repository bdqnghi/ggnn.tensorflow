int main ()
{
	int a,b,i,max,min,c,as,bs,cs;
	for (a=1;a<=3;a++)
		for (b=1;b<=3;b++)
			for (c=1;c<=3;c++)
			{
			as=(b>a)+(a==c);
			bs=(a>b)+(a>c);
			cs=(c>b)+(b>a);
			if (      ( ( (a>b) && (as<bs) ) || ( (a<b) && (as>bs) ))
				    && (( (c>b) && (cs<bs) ) || ( (c<b) && (cs>bs) ) )
			     	&&( ( (a>c) && (as<cs) ) || ( (a<c) && (as>cs) )  )  )
			   cout <<"BCA";
			}
			return 0;
}