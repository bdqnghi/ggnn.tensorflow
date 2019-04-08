int isrunnian(int y){
	if((y%4==0&&y%100!=0)||y%400==0)
		return 1;
	return 0;
}
int main()
{
	int y,m,d,sum;
	scanf("%d%d%d",&y,&m,&d);
	sum=(y%7+(y-1)/4-(y-1)/100+(y-1)/400)%7;

	
	int month[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int i;
	for(i=0;i<m-1;i++){
		sum=sum+month[isrunnian(y)][i];
		sum=sum%7;

	}


	sum=sum+d-1;
	sum=sum%7;

	char weekdays[][10]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
	printf("%s",weekdays[sum]);



return 0;
}
