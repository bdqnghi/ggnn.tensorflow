int main(){
int a,b,c,d,e,A,B,C,D,E,temp;
temp=0;
for(a=1;a<=5;a++){
	for(b=1;b<=5;b++){
		for(c=1;c<=5;c++){
			for(d=1;d<=5;d++){
				for(e=1;e<=5;e++){
					A=(e==1);
					B=(b==2);
					C=(a==5);
					D=(c!=1);
					E=(d==1);
					if(e!=2&&e!=3){}
					else
						temp++;
					if((A==1&&a<3)||(A==0&&a>2)){}
					else
						temp++;
					if((B==1&&b<3)||(B==0&&b>2)){}
					else
						temp++;
					if((C==1&&c<3)||(C==0&&c>2)){}
					else
						temp++;
					if((D==1&&d<3)||(D==0&&d>2)){}
					else
						temp++;
					if((E==1&&e<3)||(E==0&&e>2)){}
					else
						temp++;
					if(a!=b&&b!=c&&c!=a&&a!=d&&b!=d&&c!=d&&a!=e&&b!=e&&c!=e&&d!=e){}
					else
						temp++;
					if(temp==0)
					cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
					else
						temp=0;
				}
			}
		}
	}
}
return 0;
}