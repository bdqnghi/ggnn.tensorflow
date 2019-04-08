
int main(int argc, char* argv[])
{   int a,b,c;

	int t=0;
	int aa[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&a,&b,&c);
	for(int i =0;i<b-1;i++){
		t=t+aa[i];
	}
	if(b>2){
		if((a%4==0)&&((a%100)!=0)||(a%400==0))
		{
			t=t+29;
		}else{
			t=t+28;
		}
	}
	t=t+c;
    printf("%d",t);

	return 0;
}
