int main(){
	char s[100];
	int a,b;
	scanf("%d %s %d",&a,s,&b);

	//?????????
	int l,k,i;
	l=strlen(s);
	int sz[100];
	
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z')
			sz[i]=10+s[i]-'a';
		if(s[i]>='A'&&s[i]<='Z')
			sz[i]=10+s[i]-'A';
		if(s[i]>='0'&&s[i]<='9')
			sz[i]=0+s[i]-'0';
	}

	for(i=0;i<l;i++){
		//printf("sz[%d]=%d",i,sz[i]);
		k=l-i-1;
		while(k--){
			sz[i]=sz[i]*a;}
		//printf("sz[%d]=%d",i,sz[i]);
	}
	
	int num10=0;//shijinzhishu
	for(i=0;i<l;i++){
		num10+=sz[i];
		
	}
	//printf("%d",num10);

	//zhuanhuawei b jinzhi
	int shang,yushu;
	shang=num10/b;
	yushu=num10%b;
	int geweiyushu[100];
	if(shang==0){printf("%d",yushu);}
	else {for(i=0;shang!=0;i++){
		geweiyushu[i]=yushu;
		
		yushu=shang%b;
		shang=shang/b;
	}
	geweiyushu[i]=yushu;}

	int weishu;
	weishu=i+1;
	//printf("weishu=%d",weishu);

	


	//???string

	char s2[100];

	for(i=0;i<weishu;i++){
		if(geweiyushu[i]>=10){s2[i]=geweiyushu[i]-10+'A';}
		else s2[i]=geweiyushu[i]-0+'0';
	}
	int y=0; 
	for(i=0;i<l;i++){
		if(s[i]!='0')
			y++;
	}
	//printf("y=%d\n",y);
	if(y!=0){
	for(i=weishu-1;i>=0;i--){
		printf("%c",s2[i]);
	}}
	//else printf("0");


	return 0;	
}
