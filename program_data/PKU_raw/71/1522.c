
int leapyear(int y);                             //???????
int monthday(int y,int m);                       //???????

void main()
{

	int n,year,month1,month2,i,j,temp,sum=0;

	scanf("%d",&n);

	for(i=1;i<=n;i++){
		scanf("%d%d%d",&year,&month1,&month2);
		if(month1>month2){               //?????             
			temp=month1;
			month1=month2;
			month2=temp;
		}

		for(j=month1;j<month2;j++)       //??????????????
			sum+=monthday(year,j);
		if(sum%7==0) printf("YES\n");
		else printf("NO\n");
		sum=0;
	}
}

int leapyear(int y)
{
	if(y%400==0||(y%4==0&&y%100!=0))
		return 1;
	else return 0;
}

int monthday(int y,int m)
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		return 31;
	else if(m==2)
		return 28+leapyear(y);
	else return 30;
}