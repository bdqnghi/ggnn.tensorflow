int power(int n,int k){
	int i;
	int answer=1;
	for(i=1;i<=k;i++){
		answer=answer*n;
	}
	return answer;
}
char str[100];
int checkhui(int number){
	int s=log10(number);
	int i;
	int a[1000];
	int check=1;
	for(i=0;i<=s;i++){
		a[i]=number/power(10,s-i);
		number=number-a[i]*power(10,s-i);
	}
	int j;
	for(j=0;j<=s/2;j++){
		if (a[j]==a[s-j]){
			continue;
		}
		else{
			check=0;
			break;
		}
	}	
	return check;
}

int checksu(int number){
	int j;
	int check=1;
	if (number==2) return check;
	for(j=2;j<=number-1;j++){
		if (number%j==0){return 0;break;}
	}
	return check;
}
int main(){
	int small,big;
	scanf("%d",&small);
	scanf("%d",&big);
	int i;
	int status=0;
	for(i=small;i<=big;i++){
		if ((checkhui(i)==1)&&(checksu(i)==1)) {printf("%d",i);
		status=1;
		break;
		}
	}
	for(++i;i<=big;i++){
		if ((checkhui(i)==1)&&(checksu(i)==1)) printf(",%d",i);
	}
	
if (status==0) printf("no");


	return 0;
}
	
