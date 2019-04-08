int main(int argc, char* argv[])
{
	int a,b,c,d,e;
	scanf("%d%d%d",&a,&b,&c);
	if((a%4==0&&a%100!=0) || a%400==0)
		e=29;
	else
		e=28;
	int m, n;
	n=a/400;
	m=a%400;
	if(m==0)
		n=n-1;
	int i, f=0;
	for(i=1+n*400;i<a;i++){
		if((i%4==0&&i%100!=0) || i%400==0)
			d=366;
		else
			d=365;
		f=(f+d)%7;
	}
	switch(b){
	case 1:
			f=c+f;
			break;
	case 2:
			f=31+c+f;
			break;
	case 3:
			f=31+e+c+f;
			break;
	case 4:
			f=62+e+c+f;
			break;
	case 5:
			f=92+e+c+f;
			break;
	case 6:
			f=123+e+c+f;
			break;
	case 7:
			f=153+e+c+f;
			break;
	case 8:
			f=184+e+c+f;
			break;
	case 9:
			f=215+e+c+f;
			break;
	case 10:
			f=245+e+c+f;
			break;
	case 11:
			f=276+e+c+f;
			break;
	case 12:
			f=306+e+c+f;
			break;
	}
	f=f%7;
	switch(f){
	case 0:
		printf("Sun.");
		break;
	case 1:
		printf("Mon.");
		break;
	case 2:
		printf("Tue.");
		break;
	case 3:
		printf("Wed.");
		break;
	case 4:
		printf("Thu.");
		break;
	case 5:
		printf("Fri.");
		break;
	case 6:
		printf("Sat.");
		break;
	}
	return 0;
}
