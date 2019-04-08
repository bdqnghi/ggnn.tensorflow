int main(){
	int a,b,c,d,e,f;
	int g;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;}
	else {
	g=3600*(12+d-a)+60*(e-b)+f-c;
	printf("%d\n",g);
		}
	}
return 0;
}