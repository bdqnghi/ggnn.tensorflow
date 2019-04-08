
int main() {
	int a,b,c,x,y,z;//?a b c?????????? x y z????????????
	a=3;b=2;c=1;
	x=((b>a)+(c==a));y=((a>b)+(a>c));z=((c>b)+(b>a));
	if(x<y&&y<z){ cout<<"C"<<"B"<<"A";return 0;}
	a=3;b=1;c=2;
	x=((b>a)+(c==a));y=((a>b)+(a>c));z=((c>b)+(b>a));
	if(x<z&&z<y) {cout<<"B"<<"C"<<"A";return 0;}
	a=2;b=3;c=1;
	x=((b>a)+(c==a));y=((a>b)+(a>c));z=((c>b)+(b>a));
	if(y<x&&x<z) {cout<<"C"<<"A"<<"B";return 0;}
	a=2;b=1;c=3;
	x=((b>a)+(c==a));y=((a>b)+(a>c));z=((c>b)+(b>a));
	if(z<x&&x<y) {cout<<"B"<<"A"<<"C";return 0;}
	a=1;b=2;c=3;
	x=((b>a)+(c==a));y=((a>b)+(a>c));z=((c>b)+(b>a));
	if(z<y&&y<x){ cout<<"A"<<"B"<<"C";return 0;}
	a=1;b=3;c=2;
	x=((b>a)+(c==a));y=((a>b)+(a>c));z=((c>b)+(b>a));
	if(y<z&&z<x){ cout<<"A"<<"C"<<"B";return 0;}
}