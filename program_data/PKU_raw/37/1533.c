int main()
{
	int t;
	scanf("%d",&t);
	int i,j,k,len;
	char zfc[100000];
	for(i=0;i<t;i++){
		int NUM=0,num;
		//printf("hehe");
		scanf("%s",&zfc);
		len=strlen(zfc);		
		for(j=0;j<len;j++){
			num=0;
			for(k=0;k<len;k++){
				if(j==k) continue;
				else{
					if(zfc[j]!=zfc[k]) num++;
				}
				//printf("%d",num);
			}
			//printf("aha");
			if(num==len-1) {
				printf("%c\n",zfc[j]);
				//printf("hong");
				break;
			}
			else {NUM++;//printf("he");
		}
		}
		if(NUM==len) printf("no");
	}
	scanf("%d",&t);
	return 0;
}