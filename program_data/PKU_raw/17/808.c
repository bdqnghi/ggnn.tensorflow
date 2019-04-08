int main()
{
	char str[101]={"0"};
	int i,j,len,zuo,you,a[100];
	while(scanf("%s",str)!=EOF){
		len=strlen(str);
		for(i=0;i<len;i++)
			a[i]=0;
		for(i=len-1;i>=0;i--){
			if(str[i]=='('){
				zuo=0;you=0;
				for(j=i+1;j<len;j++){			
					if(str[j]=='('&&a[j]!=1)
				        zuo++;
			        else if(str[j]==')')
				        you++;
				}
				if(you<zuo+1)
					a[i]=1;
			}
		}
		for(i=0;i<len;i++){
			if(str[i]==')'){
				zuo=0;you=0;
				for(j=0;j<i;j++){			
					if(str[j]=='(')
				        zuo++;
			        else if(str[j]==')'&&a[j]!=-1)
				        you++;
				}
				if(zuo<you+1)
					a[i]=-1;
			}
		}
		printf("%s\n",str);
		for(i=0;i<len;i++){
		    if(a[i]==0) printf(" ");
			else if(a[i]==1) printf("$");
			else printf("?");
		}
		printf("\n");
	}
	return 0;
}

