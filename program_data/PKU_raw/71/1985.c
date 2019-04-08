int main()
{
	int n,i;
	int e;
	int day1;
	int day2;
	int y[200],m1[200],m2[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
	}
	for(i=0;i<n;i++){
		e=(y[i]%4==0&&y[i]%100!=0||y[i]%400==0)?29:28;
		switch(m1[i]){
		case 1:{day1=1;break;}
		case 2:{day1=32;break;}
		case 3:{day1=32+e;break;}
		case 4:{day1=63+e;break;}
		case 5:{day1=93+e;break;}
		case 6:{day1=124+e;break;}
		case 7:{day1=154+e;break;}
		case 8:{day1=185+e;break;}
		case 9:{day1=216+e;break;}
		case 10:{day1=246+e;break;}
		case 11:{day1=277+e;break;}
		case 12:{day1=307+e;break;}
		}
		switch(m2[i]){
		case 1:{day2=1;break;}
		case 2:{day2=32;break;}
		case 3:{day2=32+e;break;}
		case 4:{day2=63+e;break;}
		case 5:{day2=93+e;break;}
		case 6:{day2=124+e;break;}
		case 7:{day2=154+e;break;}
		case 8:{day2=185+e;break;}
		case 9:{day2=216+e;break;}
		case 10:{day2=246+e;break;}
		case 11:{day2=277+e;break;}
		case 12:{day2=307+e;break;}
		}
		if((day1-day2)%7==0||(day2-day1)%7==0)printf("YES\n");
		else printf("NO\n");

	}
	return 0;
}