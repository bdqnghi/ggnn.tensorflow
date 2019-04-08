int djt(int year,int month)
{
	int i,sum=1;
	for(i=1;i<month;i++){
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				sum+=31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				sum+=30;
				break;
			case 2:
				if(year%4==0&&year%100!=0||year%400==0){
					sum+=29;
				}
				else{
					sum+=28;
				}
		}
	}
	return sum;
}
int main()
{
	int n,i,year[200],month1[200],month2[200];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&(year[i]),&(month1[i]),&(month2[i]));
	}
	for(i=0;i<n;i++){
		if((djt(year[i],month1[i])-djt(year[i],month2[i]))%7==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	
	}
	return 0;
}