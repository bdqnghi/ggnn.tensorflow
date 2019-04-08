

int main ()
{
	int a,b,c,d,e;

	for (a=1;a<6;a++)
		for (b=1;b<6;b++)
			for (c=1;c<6;c++)
				for (d=1;d<6;d++)
					for (e=1;e<6;e++)
					{
						if (a==b||a==c||a==d||a==e||b==c||b==d||b==e||c==d||c==e||d==e||e==2||e==3)
							continue;
						else
						{
							if (a==1||a==2){
								if (e!=1)
									continue;}
							if (a==3||a==4||a==5){
								if (e==1)
									continue;}
							if (b==1||b==2){
								if (b!=2)
									continue;}
							if (b==3||b==4||b==5){
								if (b==2)
									continue;}
							if (c==1||c==2){
								if (a!=5)
									continue;}
							if (c==3||c==4||c==5){
								if (a==5)
									continue;}
							if (d==1||d==2){
								if (c==1)
									continue;}
							if (d==3||d==4||d==5){
								if (c!=1)
									continue;}
							if (e==1||e==2){
								if (d!=1)
									continue;}
							if (e==3||e==4||e==5){
								if (d==1)
									continue;}
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						}
					
					}


	return 0;
}