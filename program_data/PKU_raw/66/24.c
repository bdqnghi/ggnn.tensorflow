
int main(int argc, char* argv[])
{
    int y,m,d,total,i;
	int md[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&y,&m,&d);
	total=0;
	if(y>400){
		y=400+(y-400)%400;
		}
	if((y%4==0&&y%100!=0)||(y%400==0)){
		md[1]=(29);
	}
	for(i=1;i<m;i++){
		total+=(md[i-1]%7);
	}
	total=total+(d%7);
	int n,j;
	n=total;
    for (j=1;j<y;j++){
       	if((j%4==0&&j%100!=0)||(j%400==0)){
			n=n+(366%7);
		}
		else{
			n=n+(365%7);
		}
	}
	switch (n%7){
	case 0 :{
		printf("Sun.\n");
		break;
			}
	case 1 :{
		printf("Mon.\n");
		break;
			}
	case 2 :{
		printf("Tue.\n");
		break;
			}
	case 3 :{
		printf("Wed.\n");
		break;
			}
	case 4 :{
		printf("Thu.\n");
		break;
			}
	case 5 :{
		printf("Fri.\n");
		break;
			}
	case 6 :{
		printf("Sat.\n");
		break;
			}
	}
	return 0;
}
