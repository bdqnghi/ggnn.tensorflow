int main(int argc, char* argv[])
{
	int year,month,d;
	int result=0;
    int i;
    int a[12]={31,28,31,30,31,30,31,31,31,31,30,31};
	scanf("%d%d%d",&year,&month,&d);
	if ((year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0){
		a[2]=a[2]+1;
		for(i=1;i<month;i++){
			result+=a[i];
		}
		result+=d;
	}
	else
    	         for(i=1;i<month;i++){
			result+=a[i];
		}
		result+=d;
	printf("%d\n",result);
	return 0;

}