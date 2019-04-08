
int main()
{
	int money;
	scanf("%d",&money);
	int ge,shi,bai;
	int a,b,c,d,e,f;
	ge=money%10;
	shi=(money%100-(money%100)%10)/10;
	bai=money/100;
	a=bai;
	switch(shi){
	case 0:
		b=0;c=0;d=0;break;
	case 1:
		b=0;c=0;d=1;break;
	case 2:
		b=0;c=1;d=0;break;
	case 3:
		b=0;c=1;d=1;break;
	case 4:
		b=0;c=2;d=0;break;
	case 5:
		b=1;c=0;d=0;break;
	case 6:
		b=1;c=0;d=1;break;
	case 7:
		b=1;c=1;d=0;break;
	case 8:
		b=1;c=1;d=1;break;
	case 9:
		b=1;c=2;d=0;break;
	default:
		break;
	}
	switch(ge){
	case 0:
		e=0;f=0;break;
	case 1:
		e=0;f=1;break;
	case 2:
		e=0;f=2;break;
	case 3:
		e=0;f=3;break;
	case 4:
		e=0;f=4;break;
	case 5:
		e=1;f=0;break;
	case 6:
		e=1;f=1;break;
	case 7:
		e=1;f=2;break;
	case 8:
		e=1;f=3;break;
	case 9:
		e=1;f=4;break;
	default:
		break;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}
