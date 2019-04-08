int main()
{
   int a,b,c,d,e,x[6],y[6];
   for(a=1;a<=5;a++)
       for(b=1;b<=5;b++)
	  for(c=1;c<=5;c++)
	      for(d=1;d<=5;d++)
		 for(e=1;e<=5;e++)
  if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&e!=3&&e!=2)
{
	y[a]=(e==1);
	y[b]=(b==2);
         y[c]=(a==5);
         y[d]=(c!=1);
	y[e]=(d==1);
	if(y[1]==1&&y[2]==1&&y[3]==0&&y[4]==0&&y[5]==0)
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;		
 }
   return 0;
}