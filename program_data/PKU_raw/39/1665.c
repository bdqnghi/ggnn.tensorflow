char name[200][21];
int qmg[200];
int cg[200];
char gb[200];
char xb[200];
int lw[200];
int schsum[200];


int main(){
	int n,i,num,whole;
	char str1[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int j;
		char str2[21],x4,x5;
		int x2,x3,x6;
		scanf("%s %d %d %c %c %d",str2,&x2,&x3,&x4,&x5,&x6);
		for (j=0;j<21;j++) name[i][j]=str2[j];
		qmg[i]=x2;
		cg[i]=x3;
		gb[i]=x4;
		xb[i]=x5;
		lw[i]=x6;
	    //puts(str2);
	}

	for(i=0;i<n;i++){
		schsum[i]=0;
		if(qmg[i]>80&&lw[i]>=1) schsum[i]+=8000;
		if(qmg[i]>85&&cg[i]>80) schsum[i]+=4000;
		if(qmg[i]>90) schsum[i]+=2000;
		if(xb[i]=='Y'&&qmg[i]>85) schsum[i]+=1000;
		if(gb[i]=='Y'&&cg[i]>80) schsum[i]+=850;
	}

	num=0;
	for(i=1;i<n;i++){
		if (schsum[num]<schsum[i]) num=i;
	}

	
	for(i=0;i<21;i++) str1[i]=name[num][i];

	puts(str1);
	printf("%d\n" ,schsum[num]);

	whole=0;
	for(i=0;i<n;i++){
		whole+=schsum[i];
	}
	
	printf("%d",whole);
	//printf("%d %d %d %d" ,schsum[0],schsum[1],schsum[2],schsum[3]);
	return 0;
}

