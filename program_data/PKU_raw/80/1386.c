int main()
{
	int a1,b1,c1,a2,b2,c2;
	int ans,now,md;
	scanf("%d%d%d",&a1,&b1,&c1);
	scanf("%d%d%d",&a2,&b2,&c2);
	if (a1==a2&&b1==b2) ans=c2-c1;
	else {
		if (b1==1||b1==3||b1==5||b1==7||b1==8||b1==10||b1==12) md=31;
		if (b1==4||b1==6||b1==9||b1==11) md=30;
		if (b1==2) {
			if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)) md=29;
				else md=28;
		}
		ans=md-c1;
	}
	now=b1+1;
	while ((now<b2||a1<a2)&&(now<=12)){
		if (now==1||now==3||now==5||now==7||now==8||now==10||now==12) md=31;
		if (now==4||now==6||now==9||now==11) md=30;
		if (now==2) {
			if ((a1 % 4 == 0 && a1 % 100 != 0) || (a1 % 400 == 0)) md=29;
				else md=28;
		}
		ans=ans+md;
		now++;
	}
	now=a1+1;
	while (now<a2){
		ans=ans+365;
		if ((now % 4 == 0 && now % 100 != 0) || (now % 400 == 0)) ans++;
		now++;
	}
	if (a1<a2){
	now=1;
	while (now<b2){
		if (now==1||now==3||now==5||now==7||now==8||now==10||now==12) md=31;
		if (now==4||now==6||now==9||now==11) md=30;
		if (now==2) {
			if ((a2 % 4 == 0 && a2 % 100 != 0) || (a2 % 400 == 0)) md=29;
				else md=28;
		}
		ans=ans+md;
		now++;
	}
	}
	if (a1<a2||b1<b2) ans=ans+c2;
	printf("%d\n",ans);
	return 0;
}


