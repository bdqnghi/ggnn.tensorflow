void main(){
    int m,i,k;
	 float sumz=0,max;
	struct student
	{char a[20];
	int b;
	int c;
	char d;
	char e;
	int f;
	float sum;
	};
	struct student num[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%s%d%d %c %c%d",num[i].a,&num[i].b,&num[i].c,
		&num[i].d,&num[i].e,&num[i].f);
		num[i].sum=0;
	}

	for(i=0;i<m;i++){
		if((num[i].b>80)&&(num[i].f>=1))num[i].sum=num[i].sum+8000;
		if((num[i].b>85)&&(num[i].c>80))num[i].sum=num[i].sum+4000;
		if((num[i].b>90))num[i].sum=num[i].sum+2000;
		if((num[i].b>85)&&(num[i].e=='Y'))num[i].sum=num[i].sum+1000;
		if((num[i].c>80)&&(num[i].d=='Y'))num[i].sum=num[i].sum+850;
	}
	
	max=num[m-1].sum;k=m-1;
	for(i=m-1;i>=0;i--)
		if(num[i].sum>=max){
			max=num[i].sum;
			k=i;
			}
	for(i=0;i<m;i++)sumz=sumz+num[i].sum;
	printf("%s\n%.0f\n%.0f\n",num[k].a,num[k].sum,sumz);


    
}
