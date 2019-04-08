
int main(int argc, char* argv[])
{
	int year,mon,day,i;
	int total=0;
	scanf("%d%d%d",&year,&mon,&day);

	if (year % 4 == 0 && year % 100 !=0  || year % 400 ==0){
		int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
		for(i=0;i<mon;i++){
		
			total=total+a[i];
        }
        
	}
else {
			int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
             for(i=0;i<mon;i++){
				 
			total=total+a[i];
			 }
	}
           total+=day;
		printf("%d",total);

	return 0;
}

