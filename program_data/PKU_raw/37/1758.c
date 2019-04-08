void main()
{
	int a[26],flag1,flag2,len;
	int t,i,j,k;
	char s[100],c[26];

	scanf("%d",&t);

	while(t--){
		for(i=0;i<26;i++){
			a[i]=0;
		}
		k=0;
		flag2=0;

		scanf("%s",s);
		len=strlen(s);	
	
		for(i=0;i<len;i++){
			if(i==0){
				c[k]=s[i];
				k++;
			}
			else{
				flag1=0;
				for(j=0;j<i;j++){
					if(c[j]==s[i]){
						flag1=1;
						a[j]=1;
					}
				}
				if(flag1==0){
					c[k]=s[i];
					k++;
				}
			}
		}

		for(i=0;i<k;i++){
			if(a[i]==0){
				printf("%c\n",c[i]);
				flag2=1;
				break;
			}
		}

		if(flag2==0)
			printf("no\n");
	}
}