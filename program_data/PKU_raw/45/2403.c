
int main()
{
	int i,j,len,num,isbreak=0;
	char s[50],w[50];
	scanf("%s%s",s,w);
	len=strlen(s);
	for(i=0;i<50;i++){
		if(w[i]==s[0]){
			num=i;
			for(j=1;s[j]!='\0';j++,i++){
				if(s[j]!=w[i])
					break;
			}
			if(j-1==len)
				isbreak=1;
			break;
		}
		if(isbreak==1)
			break;
	}
		
	
	printf("%d",num);
	return 0;
}


