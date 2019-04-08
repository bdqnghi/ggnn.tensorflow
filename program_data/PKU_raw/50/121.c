
int main(int argc, char* argv[])
{
   int n,day,yu,i,k;
   int sum=0;
   int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&n);
	for(i=0;i<12;i++){
		sum=0;
		for(k=0;k<i;k++){
			sum=sum+monthday[k];
		}
		sum=sum+12;
		yu=sum%7;
		if(yu+n<=7){
			day=yu+n;
		}
		else if(yu+n>7){
			day=n-(7-yu);
		}
		else;
		if(day==5){
			printf("%d\n",i+1);
		}
	}

	   

	return 0;
}

