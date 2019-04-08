int main(int argc, char* argv[])
{
	int a,b,c,d,n;
	scanf("%d%d%d",&a,&b,&c);	
    if((a%4==0&&a%100!=0)||(a%400==0))
	    d=29;
	else
		d=28;
	if (b==1)
		n=c;
	else if (b==2)
		n=c+31;
	else if(b==3)
		n=31+d+c;
	else if(b==4)
		n=62+d+c;
	else if(b==5)
		n=92+d+c;
	else if(b==6)
		n=123+d+c;
	else if(b==7)
		n=153+d+c;
	else if(b==8)
		n=184+d+c;
	else if(b==9)
		n=215+c+d;
	else if(b==10)
		n=245+c+d;
	else if(b==11)
		n=276+c+d;
	else if(b==12)
		n=306+c+d;
	printf("%d\n",n);
		return 0;

}


