void main()
{
	char str[MAX];
	int n,len,i,j=0,k,flag,max;
	struct subs{
		char s[5];
		int num;
	}sub[MAX];

	scanf("%d",&n);
	getchar();
	gets(str);
	len=strlen(str);

	for(i=0;i<=len-n;i++){
		(sub+i)->num=0;
		if(i==0){
			strncpy((sub+j)->s,str+i,n);
			(sub+j)->s[n]='\0';
			(sub+j)->num++;
			j++;
		}
		else{
			flag=1;
			for(k=0;k<j;k++){
				if( strncmp((sub+k)->s,str+i,n)==0 ){
					(sub+k)->num++;
					flag=0;
					break;
				}
			}

			if(flag){
				strncpy((sub+j)->s,str+i,n);
				(sub+j)->s[n]='\0';
				(sub+j)->num++;
				j++;
			}
		}
	}

	for(i=0;i<j;i++){
		if(i==0)
			max=(sub+i)->num;
		else if( (sub+i)->num>max )
			max=(sub+i)->num;
	}

	if(max==1)
		printf("NO\n");
	else{
		printf("%d\n",max);
		for(i=0;i<j;i++)
			if((sub+i)->num==max)
				puts((sub+i)->s);
	}
}
