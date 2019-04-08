
void main(){
int a,b,c;
int leap=0;
int day=0;
scanf("%d%d%d",&a,&b,&c);
if(a%400==0||(a%4==0&&a%100!=0))leap=1;
b--;
while(b){
	if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
		b--;
		day+=31;
	}
		if(b==2){
		b--;
		day+=28+leap;
	}
		if(b==4||b==6||b==9||b==11){
		b--;
		day+=30;
		}
}
day+=c;
printf("%d",day);
}