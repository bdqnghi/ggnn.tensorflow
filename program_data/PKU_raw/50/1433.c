int main(){
	int w,d=1;
	scanf("%d",&w);
	if (w==1)
		d=5;
	if (w==2) 
		d=4;
	if (w==3)
		d=3;
	if (w==4)
		d=2;
	if (w==6)
		d=7;
	if (w==7)
		d=6;
	if ((13-d)%7==0)
		printf("1\n");
	if ((44-d)%7==0)
		printf("2\n");
	if ((72-d)%7==0)
		printf("3\n");	
	if ((103-d)%7==0)
		printf("4\n");
	if ((133-d)%7==0)
		printf("5\n");
	if ((164-d)%7==0)
		printf("6\n");
	if ((194-d)%7==0)
		printf("7\n");	
	if ((225-d)%7==0)
		printf("8\n");
	if ((256-d)%7==0)
		printf("9\n");
	if ((286-d)%7==0)
		printf("10\n");
	if ((317-d)%7==0)
		printf("11\n");
	if ((347-d)%7==0)
		printf("12\n");	
	return 0;
}
