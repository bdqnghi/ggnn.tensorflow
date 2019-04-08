
void main()
{
	int reverse(int NUM);
	int i;
	int sz[6];
	for(i=0;i<6;i++){
             scanf("%d",&sz[i]);
	}
	for(i=0;i<6;i++){
             sz[i]=reverse(sz[i]);
	    printf("%d\n",sz[i]);
	}
}

int reverse(int NUM)
{
	int ge,shi,bai,qian,wan;
	ge=NUM%10;
	shi=NUM%100/10;
	bai=NUM%1000/100;
	qian=NUM%10000/1000;
	wan=NUM/10000;
	int c;
	if(wan!=0){
	    c=ge*10000+shi*1000+bai*100+qian*10+wan;
	}
	if(wan==0&&qian!=0){
	    c=ge*1000+shi*100+bai*10+qian;
	}
	if(wan==0&&qian==0&&bai!=0){
	    c=ge*100+shi*10+bai;
	}
	if(wan==0&&qian==0&&bai==0&&shi!=0){
	    c=ge*10+shi;
	}
	if(wan==0&&qian==0&&bai==0&&shi==0){
	    c=ge;
	}
	return c;
}