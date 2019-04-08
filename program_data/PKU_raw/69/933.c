
int shift(char n){
	int shift;
	switch(n){
		case'1':shift=1;break;
		case'2':shift=2;break;
		case'3':shift=3;break;
		case'4':shift=4;break;
		case'5':shift=5;break;
		case'6':shift=6;break;
		case'7':shift=7;break;
		case'8':shift=8;break;
		case'9':shift=9;break;
		case'0':shift=0;break;
	}
	return shift;
}

int main(){
	char a[252],b[252],c[252],d[252];
	int lengtha,lengthb,sum[252],lon,i,lina,linb,cha,sh;
	d[0]='0';
	d[1]='\0';
	scanf("%s%s",a,b);
	lengtha=strlen(a);
	lengthb=strlen(b);
	for(lina=0;lina<lengtha;lina++){
		if(a[lina]!='0')break;
	}
	lina;
	for(linb=0;linb<lengthb;linb++){
		if(b[linb]!='0')break;
	}
	linb;
    
	
	if(lengtha-lina>=lengthb-linb){
		cha=(lengtha-lina)-(lengthb-linb);
		for(i=0;i<=cha;i++){
			c[i]='0';
		}
		c[cha+1]='\0';
		strcat(c,b);
		strcat(d,a);
		lon=lengtha;
		sh=lina;
	}
	else{
		cha=(lengthb-linb)-(lengtha-lina);
		for(i=0;i<=cha;i++){
			c[i]='0';
		}
		c[cha+1]='\0';
		strcat(c,a);
		strcat(d,b);
		lon=lengthb;
		sh=linb;
	}
	sum[lon]=0;
	for(i=lon;i>sh;i--){
		sum[i-1]=0;
		sum[i]=shift(d[i])+shift(c[i])+sum[i];
		if(sum[i]>=10){
			sum[i]-=10;
			sum[i-1]++;
		}
	}
	if(sh==0){
		if(sum[0]==1)printf("1");
	    for(i=1;i<=lon;i++)printf("%d",sum[i]);
	    printf("\n");
	}
	else{
	if(sum[sh-1]==1)printf("1");
	for(i=sh;i<=lon;i++)printf("%d",sum[i]);
	printf("\n");
	}
	return 0;
}

