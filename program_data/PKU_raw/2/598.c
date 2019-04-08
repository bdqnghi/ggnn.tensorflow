void main()
{
	struct book{
		int num;
		char str[30];
	}bk[1000]={0};
	int i,j,m,n,sum[100]={0},number[1000]={0},result,max=0;
	char temp='A';
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d %s",&bk[i].num,&bk[i].str);
	for(i=65;i<=90;i++){
		for(j=0;j<m;j++){
			for(n=0;n<26;n++)
				if(bk[j].str[n]==i)
					sum[i]++;
		}
	}
	for(j=0;j<26;j++){
		if(sum[j+65]>max){
			max=sum[j+65];
			temp=j+65;
			result=j+65;
		}
	}
	for(i=0;i<m;i++){
		for(n=0;n<30;n++)
			if(bk[i].str[n]==temp){
				number[i]=bk[i].num;
				break;
			}
	}
	printf("%c\n%d\n",temp,sum[result]);
	for(i=0;i<m;i++)
		if(number[i]!=0)
			printf("%d\n",number[i]);
}




	
			