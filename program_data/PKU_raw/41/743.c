int main()
{
	int a,b,c,d,e;
	for(a=1;a<=5;a++){
		for(b=1;b<=5;b++){
			if(b==a){
				continue;
			}
			for(c=1;c<=5;c++){
				if(c==a||c==b){
					continue;
				}
				for(d=1;d<=5;d++){
					if(d==a||d==b||d==c){
						continue;
					}
					for(e=1;e<=5;e++){
						if(e==a||e==b||e==c||e==d||e==2||e==3){
							continue;
						}
						if(e!=1&&d!=1&&a!=1&&a!=2&&b!=1&&c==1&&a==5&&d!=2){
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
						}
					}
				}
			}
		}
	}
	return 0;
}