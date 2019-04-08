

int main(int argc, char* argv[])
{
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int w,i;
	scanf("%d",&w);
	w=(w+12)%7;
	if(w==5){
		printf("1\n");
	}
	for(i=0;i<11;i++){
		w=(w+day[i])%7;
		if(w==5){
			printf("%d\n",i+2);
		}
	}
	return 0;
}
