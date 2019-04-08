int main(){
	int n;
	scanf("%d",&n);
	char suoyou[53][35];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",&suoyou[i]);
		if(suoyou[i][strlen(suoyou[i])-1]=='r')
			suoyou[i][strlen(suoyou[i])-2]='\0';
		else if(suoyou[i][strlen(suoyou[i])-1]=='y')
			suoyou[i][strlen(suoyou[i])-2]='\0';
		else if(suoyou[i][strlen(suoyou[i])-1]=='g')
			suoyou[i][strlen(suoyou[i])-3]='\0';
		printf("%s\n",suoyou[i]);
	}
	return 0;
}