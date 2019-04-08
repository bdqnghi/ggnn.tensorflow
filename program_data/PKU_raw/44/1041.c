
int in[6];
int main(int argc, char* argv[])
{
	
	int i;
	int reverse(int x);
	for(i=0;i<6;i++){
	scanf("%d",&in[i]);}
	for(i=0;i<6;i++){
	printf("%d\n",reverse(i));}
	return 0;
}
	int reverse(int x){
	int a,b,c,d,e;
	a=in[x]/10000;
	e=in[x]%10;
	d=(in[x]%100-in[x]%10)/10;
	b=(in[x]-10000*a)/1000;
	c=(in[x]-10000*a-1000*b)/100;
	if(a!=0){
		return 10000*e+1000*d+100*c+10*b+a;}
	else if(b!=0){
	return 1000*e+100*d+10*c+b;}
	else if(c!=0){
	return 100*e+10*d+c;}
	else if(d!=0){
	return 10*e+d;}
	else if(e!=0){
	return e;}
	else return 0;}