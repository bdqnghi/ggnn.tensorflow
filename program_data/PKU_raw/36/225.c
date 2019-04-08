int main()
{
	char str[100],str1[100];
	scanf("%s %s",str,str1);
	int i,j,len = strlen(str),len1 = strlen(str1);
	if(len != len1)
		printf("NO\n");
	else{
		for(i = 0;i < len - 1;i++){
			for(j = i + 1;j < len;j++){
				if(str[i] > str[j]){
					char temp = str[i];
					str[i] = str[j];
					str[j] = temp;
				}
			}
		}
		for(i = 0;i < len1 - 1;i++){
			for(j = i + 1;j < len1;j++){
				if(str1[i] > str1[j]){
					char temp = str1[i];
					str1[i] = str1[j];
					str1[j] = temp;
				}
			}
		}
		if(strcmp(str,str1) == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}