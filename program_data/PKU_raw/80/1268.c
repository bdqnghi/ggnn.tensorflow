int main(){
	int day(int ,int );
	int sy,sm,sd;
	int ey,em,ed;
	int d=0,d1,d2;
	cin>>sy>>sm>>sd>>ey>>em>>ed;
	int i,run=0;
	for(i=sy;i<ey;i++)
		{
		if ((i%4==0 && i%100!=0) || (i%400==0))
        run=run+1;
		}
	d=365*(ey-sy-run)+366*run;
	d=d-day(sy,sm)+day(ey,em)-sd+ed;
	cout<<d;
	return 0;
}
int day(int year,int month){
	int a;
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	switch(month){
	case 1:a=0;break;
	case 2:a=31;break;
	case 3:a=60;break;
	case 4:a=91;break;
	case 5:a=121;break;
	case 6:a=152;break;
	case 7:a=182;break;
	case 8:a=213;break;
	case 9:a=244;break;
	case 10:a=274;break;
	case 11:a=305;break;
	case 12:a=335;break;
	}
	else{
		switch(month){
			case 1:a=0;break;
			case 2:a=31;break;
			case 3:a=59;break;
			case 4:a=90;break;
			case 5:a=120;break;
			case 6:a=151;break;
			case 7:a=181;break;
			case 8:a=212;break;
			case 9:a=243;break;
			case 10:a=273;break;
			case 11:a=304;break;
			case 12:a=334;break;
		}
	}
	return a;
}