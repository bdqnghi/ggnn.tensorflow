
int main(){
	int value,i;
	int num[6],mdy[5];

	scanf("%d",&value);

	if(value>=100)
	{
		num[0]=(value-value%100)/100;
		mdy[0]=value%100;
	}else{
		num[0]=0;
		mdy[0]=value;
	}

	if(mdy[0]>=50)
	{
		num[1]=(mdy[0]-mdy[0]%50)/50;
		mdy[1]=mdy[0]%50;
	}else{
		num[1]=0;
		mdy[1]=mdy[0];
	}

	if(mdy[1]>=20)
	{
		num[2]=(mdy[1]-mdy[1]%20)/20;
		mdy[2]=mdy[1]%20;
	}else{
		num[2]=0;
		mdy[2]=mdy[1];
	}

	if(mdy[2]>=10)
	{
		num[3]=(mdy[2]-mdy[2]%10)/10;
		mdy[3]=mdy[2]%10;
	}else{
		num[3]=0;
		mdy[3]=mdy[2];
	}

	if(mdy[3]>=5)
	{
		num[4]=(mdy[3]-mdy[3]%5)/5;
		mdy[4]=mdy[3]%5;
	}else{
		num[4]=0;
		mdy[4]=mdy[3];
	}

	num[5]=mdy[4];

	for(i=0;i<6;i++){
		printf("%d\n",num[i]);
	}

	return 0;

}
	