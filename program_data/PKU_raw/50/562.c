
int main(int argc, char* argv[])
{
	int w,i,j;
	int total[13];
	scanf("%d",&w);
	for(j=1;j<=12;j++){
		total[j]=12;
		for(i=1;i<j;i++){
			if(i==1||i==3||i==5||i==7||i==8||i==10)
				total[j]+=31;
			if(i==4||i==6||i==9||i==11)
				total[j]+=30;
			if(i==2)
				total[j]+=28;
		}
		if((w<=5&&total[j]%7==5-w)||(w>5&&total[j]%7==12-w))
			printf("%d\n",j);
	}
	return 0;
}
