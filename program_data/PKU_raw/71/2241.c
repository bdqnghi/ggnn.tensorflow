int Run(int);
int DI(int,int); 
int main()
{ 
	int n,j,m;
	int year[200],month[200][2],a[200];
		scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%d %d %d",&year[m],&month[m][0],&month[m][1]);
		if((DI(year[m],month[m][1])-DI(year[m],month[m][0]))%7==0)
			a[m]=1;
		else 
			a[m]=0;
	}	
	for( j=0;j<n;j++){
		if(a[j]==1)
	printf("YES\n");
		else
	printf("NO\n");}
return 0;
}

	

	int DI(int year,int month)
	{
		int i;
		int Run(int);
	int total=1;
	for(i=1;i<month;i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
			total+=31;
		else if(i==4||i==6||i==9||i==11)
			total+=30;
		else if(i==2){
			if(Run(year)){
				total+=29;
			}else {
				total+=28;
			}
	}}
		
		return total;
	

}
int Run(int year){
		
		
		int result=0;
		if(year%400==0||(year%4==0&&year%100!=0)){
			result=1;
		}else {
			result=0;
	}
	return result;
	}