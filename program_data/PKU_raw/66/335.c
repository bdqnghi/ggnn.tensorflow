int main()
{
	int a,b,c,m=0,i;
	scanf("%d%d%d",&a,&b,&c);
    m+=a-1+(a-1)/4-(a-1)/100+(a-1)/400+c;
    int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if(b>1){
		if(a%4!=0||(a%100==0&&a%400!=0)){
			for(i=0;i<b-1;i++){
				m+=m1[i];
			}
		}
		else{
			for(i=0;i<b-1;i++)
				m+=m2[i];
		}
	}
	if(m%7==1)  printf("Mon.");
    if(m%7==2)  printf("Tue.");
	if(m%7==3)  printf("Wed.");
    if(m%7==4)  printf("Thu.");
	if(m%7==5)  printf("Fri.");
	if(m%7==6)  printf("Sat.");
	if(m%7==0)  printf("Sun.");
	return 0;
}