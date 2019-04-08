int main(){
	char str1[1000];
	cin>>str1;
	char str2[1000];
	cin>>str2;
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i,j;
	for(i=0;i<len1-1;i++){
		for(j=0;j<len1-1-i;j++){
			if (str1[j]>str1[j+1]){
				char tmp=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=tmp;
			}
		}
	}


		for(i=0;i<len2-1;i++){
		for(j=0;j<len2-1-i;j++){
			if (str2[j]>str2[j+1]){
				char tmp=str2[j];
				str2[j]=str2[j+1];
				str2[j+1]=tmp;
			}
		}
	}
		//puts(str1);
		//puts(str2);
		if (strcmp(str1,str2)==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
return 0;
}