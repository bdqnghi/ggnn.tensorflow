int main ()
{
	int a,b,c,d,e;
	for(a=1;a<=5;++a){
		for(b=1;b<=5;++b){
			for(c=1;c<=5;++c){
			   for(d=1;d<=5;++d){
			      for(e=4;e<=5;++e){
               if(a==1||a==2)
				   e=1;
			   if(b==1||b==2)
                   b=2;
			   if(c==1||c==2)
                   a=5;
			   if(d==1||d==2)
                   c!=1;
			   
		if((e==1)+(b==2)+(a==5)+(c!=1)+(d==1)==2&&a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
			cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}
				}
			}
		}
	}
	return 0;
}