int main(int argc, char* argv[])
{
	int a,b,c,x=0,i;
	scanf("%d%d%d",&a,&b,&c);	
	for(i=1;i<b;i++)
		{
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)	
		{x=x+31;}
		else if(i==2){
		x=x+28;}
		else
		x=x+30;
	}
	if(((a%4==0)&&(a%100!=0)||(a%400==0))&&(b>2)){
	x=x+1;}
	x=x+c;
	printf("%d\n",x);
	return 0;
}