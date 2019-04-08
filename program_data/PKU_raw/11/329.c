int main(){
	int a,b,c,i,j,m=0,n,r=0;
	scanf("%d%d%d",&a,&b,&c);
    if (((a%4==0)&&(a%100!=0))||(a%400==0))
		r=1;
	if (r==1)
		switch(b){
			case 2:
				m=31;
				break;
			case 3:
				m=60;
				break;
			case 4:
				m=91;
				break;
			case 5:
				m=121;
				break;
			case 6:
				m=152;
				break;
			case 7:
				m=182;
				break;
			case 8:
				m=213;
				break;
			case 9:
				m=244;
				break;
			case 10:
				m=274;
				break;
			case 11:
				m=305;
				break;
			case 12:
				m=335;
				break;
	}
	else switch(b){
			case 2:
				m=31;
				break;
			case 3:
				m=59;
				break;
			case 4:
				m=90;
				break;
			case 5:
				m=120;
				break;
			case 6:
				m=151;
				break;
			case 7:
				m=181;
				break;
			case 8:
				m=212;
				break;
			case 9:
				m=243;
				break;
			case 10:
				m=273;
				break;
			case 11:
				m=304;
				break;
			case 12:
				m=334;
				break;
	}
	n=m+c;
	printf("%d",n);
	return 0;
}

	  


