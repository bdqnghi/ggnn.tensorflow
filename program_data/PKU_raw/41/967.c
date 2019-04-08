int main()
{
	int a, b,c, d, e;
	int as,bs,cs,ds,es;
	for(a=1; a<=5; a++)
		for(b=1; b<=5; b++)
			for(c=1; c<=5; c++)
				for(d=1; d<=5; d++)
					for(e=2; e<=3; e++)
					{
						as=(int)e==1;
						bs=(int)b==2;
						cs=(int)a==5;
						ds=(int)c!=1;
						es=(int)d==1;
						if((as==1&&bs==1&&a<c&&a<d&&a<e&&b<c&&b<d&&b<e||
							as==1&&cs==1&&a<b&&a<d&&a<e&&c<b&&c<d&&c<e||
							as==1&&ds==1&&a<b&&a<c&&a<e&&d<b&&d<c&&d<e||
							as==1&&es==1&&a<b&&a<c&&a<d&&e<b&&e<c&&e<d||
							bs==1&&cs==1&&b<a&&b<d&&b<e&&b<c&&b<d&&b<e||
							bs==1&&ds==1&&b<a&&b<c&&b<e&&d<a&&d<c&&d<e||
							bs==1&&es==1&&b<a&&b<c&&b<d&&e<a&&e<c&&e<d||
							cs==1&&ds==1&&c<a&&c<b&&c<e&&d<a&&d<b&&d<e||
							cs==1&&es==1&&c<a&&c<b&&c<d&&e<a&&e<b&&e<d||
							ds==1&&es==1&&d<a&&d<b&&d<c&&e<a&&e<b&&e<c)&&a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e&&a==5&&b==2)
							cout<<a<<" "<<b<<" "<<d<<" "<<e<<" "<<c<<endl;
					}
	return 0;
}