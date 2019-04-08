int main()
{
	int tianshu(int nian,int yue);
	int i,n,nian,yue1,yue2,dur;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&nian,&yue1,&yue2);
		dur=tianshu(nian,yue2)-tianshu(nian,yue1);
		if(dur%7==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
int tianshu(int nian,int yue)
{
	int i,result=0;
	for(i=1;i<=yue-1;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			result=result+31;
		else if(i==4||i==6||i==9||i==11)
			result=result+30;
		else if(i==2){
			if(nian%4==0&&nian%100!=0||nian%400==0)
				result=result+29;
			else
				result=result+28;
		}
	}
	return result;
}