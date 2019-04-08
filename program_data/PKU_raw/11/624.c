
int main(int argc, char* argv[])
{int a,b,c,e,i;
int d=0;

scanf("%d %d %d",&a,&b,&c);
if (a%4==0&&a%100!=0||a%400==0){int score[12]={31,29,31,30,31,30,31,31,30,31,30,31};
for (i=0;i<b-1;i++){
	d=d+score[i];}
e=d+c;}
	else{int score[12]={31,28,31,30,31,30,31,31,30,31,30,31};
for (i=0;i<b-1;i++){
	d=d+score[i];}
e=d+c;}
	printf("%d\n",e);
	return 0;
}