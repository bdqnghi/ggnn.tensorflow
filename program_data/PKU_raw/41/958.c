int main()
{int a,b,c,d,e;
for (a=1;a<=5;a++)
	for (b=1;b<=5;b++)
		for (c=1;c<=5;c++)
			for (d=1;d<=5;d++)
				for (e=1;e<=5;e++)
				{   while (a==1&&a==2)
				    {if (e!=1)
				     continue;}
				    while (b==1&&b==2)
				    {if (b!=2)
				     continue;}
				    while (c==1&&c==2)
				    {if (a!=5)
				     continue;}
				    while (d==1&&d==2)
				    {if (c=1)
				     continue;}
				    while (e==1&&e==2)
				    {if (d!=1)
				     continue;}
					if(((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2)&&e!=2&&e!=3&&a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&e!=1&&d!=1&&a!=1&&b!=1)
						cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
				}    
return 0;
}