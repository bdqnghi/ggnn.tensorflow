int main(int argc, char* argv[])
{
	int w,i,j,total=0;
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		total=0;
		for(j=0;j<i;j++){
			if(j==1||j==3||j==5||j==7||j==8||j==10||j==12){
				total+=31;
			}
			if(j==4||j==6||j==9||j==11){
				total+=30;
			}
			if(j==2){
				total+=28;
			}
			if(j==0){
				total+=0;
			}
		}	
		total+=13;	
		if((w+total%7-1)%7==5){
			printf("%d\n",i);
		}
		else
			continue;
	}
	return 0;
}