int main(int argc, char* argv[])
{
	int year,m,d,result=0;
	scanf ("%d%d%d",&year,&m,&d);
	for (int i=1;i<m;i++){
		if (i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			result+=31;
		else if (i==2){
				if (year%400==0||year%4==0&&year%100!=0)
					result+=29;
				else
					result+=28;
			}
			else
				result+=30;
	}
	result+=d;
	printf ("%d\n",result);
	return 0;
}

