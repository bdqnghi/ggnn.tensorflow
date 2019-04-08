
main(){
	int a[100],b[100];
	int blength,i,alength,sum,zero,test;
	char s[100];
	scanf("%s",s);
	alength=strlen(s);
	blength=0;
	zero=0;
	test=0;
	for(i=1;i<=alength;i++){
		a[i-1]=s[i-1]-'0';
	}
	for(i=alength;i>=1;i--){
		if(a[i-1]==0){
			zero++;
		}
		else{
			break;
		}
	}
	
	for(i=1;i<=alength-1;i++){
		sum=a[i-1]*10+a[i];
		
		
		if(sum>=13){
			a[i]=sum%13;
			b[blength]=(sum-a[i])/13;
			blength++;//100?&#196;&#199;é&#191;&#246;
			if(i==(alength-1-zero)){
				test=1;
				break;
			} 
		}
		else{
			
			a[i]+=a[i-1]*10;
			if(alength<=2&&sum<13){
				blength=1;
				b[0]=0;
				break;
			}
			if(blength!=0){
				b[blength]=0;
				blength++;
			}
		}
	}
	if(alength==1){
		blength=1;
		b[0]=0;
	}
	for(i=1;i<=blength;i++){
		printf("%d",b[i-1]);
		
	}
	if(zero!=0&&test==1){
		for(i=1;i<=zero;i++){
			printf("0");
		}
	}
	printf("\n%d",a[alength-1]);
} 