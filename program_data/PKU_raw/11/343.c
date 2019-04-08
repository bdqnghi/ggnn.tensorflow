
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if (((a%4==0) && (a%100!=0))||(a%400==0)){
		switch (b){
		case 1: {printf("%d", c);break;}
		case 2: {printf("%d", c+31);break;}
		case 3: {printf("%d", c+60);break;}
		case 4: {printf("%d", c+91);break;}
		case 5: {printf("%d", c+121);break;}
		case 6: {printf("%d", c+152);break;}
		case 7: {printf("%d", c+182);break;}
		case 8: {printf("%d", c+213);break;}
		case 9: {printf("%d", c+243);break;}
		case 10: {printf("%d", c+273);break;}
		case 11: {printf("%d", c+305);break;}
		case 12: {printf("%d", c+335);}
		}
	}
	else {
		switch (b){
		case 1: {printf("%d", c);break;}
		case 2: {printf("%d", c+31);break;}
		case 3: {printf("%d", c+59);break;}
		case 4: {printf("%d", c+90);break;}
		case 5: {printf("%d", c+120);break;}
		case 6: {printf("%d", c+151);break;}
		case 7: {printf("%d", c+181);break;}
		case 8: {printf("%d", c+212);break;}
		case 9: {printf("%d", c+243);break;}
		case 10: {printf("%d", c+273);break;}
		case 11: {printf("%d", c+304);break;}
		case 12: {printf("%d", c+334);}
		}
	}
	return 0;
}