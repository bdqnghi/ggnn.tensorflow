void main(){
	int n;
	char s[81];
	int i,flag=0,j;
	scanf("%d",&n);
    getchar();
	for(i=0;i<n;i++){
		flag=0;  //???????,da?
		gets(s);
		j=0;
		if((s[j]=='_') || (s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z')){    //????????
			j++;
                            flag=1;
			while(s[j]!='\0'){
				if((s[j]=='_')|| (s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z') || (s[j]>='0' && s[j]<='9')){
					flag=1;
					j++;
				}
				else{
					flag=0;
					break;
				}
			}
		}
		else{
			flag=0;
		}
		if(flag)
			printf("1\n");
		else{
			printf("0\n");
		}
	}
}




