int main(int argc, char* argv[])
{
	int y,m,d,i,w;
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&y,&m,&d);
	w=y%7+y/4-y/100+y/400;
	for(i=1;i<m;i++){
	    w+=days[i];
	}
    w+=d-1;
	if(((y%4==0&&y%100!=0)||y%400==0)&&(m<=2))
		w--;
	switch(w%7){
	case 1:printf("Mon.\n");break;
	case 2:printf("Tue.\n");break;
	case 3:printf("Wed.\n");break;
	case 4:printf("Thu.\n");break;
	case 5:printf("Fri.\n");break;
	case 6:printf("Sat.\n");break;
	case 0:printf("Sun.\n");break;
	}
	
	return 0;
}