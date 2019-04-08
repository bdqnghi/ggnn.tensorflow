int main(int argc, char* argv[])
{
	int n,i;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int e,d,j,sum=0;
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(b>c){
			d=b;
			b=c;
			c=d;
		}
		if(((a%4==0)&&(a%100!=0))||(a%400==0)){
			day[2]=29;
		}
		else{
			day[2]=28;
		}
		for(j=b;j<c;j++){
			sum=sum+day[j];
		}
		e=sum%7;
		if(e==0){
			printf("YES\n");
		}
		else
			printf("NO\n");
	}
	return 0;
}
