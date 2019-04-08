int main()
{
	int n,i,e1,e2,c,dat1,dat2,da1,da2;
	i=0;
	int year[200],month1[200],month2[200];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d%d%d",&(year[i]),&(month1[i]),&(month2[i]));
	}
	for(i=0;i<=n-1;i++){
		if((year[i]%4==0&&year[i]%100!=0)||(year[i]%100==0&&year[i]%400==0)){
			e1=month1[i];
			e2=month2[i];
				if(e1==1){
		da1=0;
	}else if(e1==2){
		da1=31;
	}else if(e1==3){
		da1=60;
	}else if(e1==4){
		da1=91;
	}else if(e1==5){
		da1=121;
	}else if(e1==6){
		da1=152;
	}else if(e1==7){
		da1=182;
	}else if(e1==8){
		da1=213;
	}else if(e1==9){
		da1=244;
	}else if(e1==10){
		da1=274;
	}else if(e1==11){
		da1=305;
	}else{
		da1=335;
	}
		if(e2==1){
		da2=0;
	}else if(e2==2){
		da2=31;
	}else if(e2==3){
		da2=60;
	}else if(e2==4){
		da2=91;
	}else if(e2==5){
		da2=121;
	}else if(e2==6){
		da2=152;
	}else if(e2==7){
		da2=182;
	}else if(e2==8){
		da2=213;
	}else if(e2==9){
		da2=244;
	}else if(e2==10){
		da2=274;
	}else if(e2==11){
		da2=305;
	}else{
		da2=335;
	}
			c=da1-da2;
			if(c%7==0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			e1=month1[i];
			e2=month2[i];
	if(e1==1){
		dat1=0;
	}else if(e1==2){
		dat1=31;
	}else if(e1==3){
		dat1=59;
	}else if(e1==4){
		dat1=90;
	}else if(e1==5){
		dat1=120;
	}else if(e1==6){
		dat1=151;
	}else if(e1==7){
		dat1=181;
	}else if(e1==8){
		dat1=212;
	}else if(e1==9){
		dat1=243;
	}else if(e1==10){
		dat1=273;
	}else if(e1==11){
		dat1=304;
	}else{
		dat1=334;
	}
		if(e2==1){
		dat2=0;
	}else if(e2==2){
		dat2=31;
	}else if(e2==3){
		dat2=59;
	}else if(e2==4){
		dat2=90;
	}else if(e2==5){
		dat2=120;
	}else if(e2==6){
		dat2=151;
	}else if(e2==7){
		dat2=181;
	}else if(e2==8){
		dat2=212;
	}else if(e2==9){
		dat2=243;
	}else if(e2==10){
		dat2=273;
	}else if(e2==11){
		dat2=304;
	}else{
		dat2=334;
	}
			c=dat1-dat2;
			if(c%7==0){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	}
	return 0;
}