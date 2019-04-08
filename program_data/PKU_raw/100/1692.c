int main(){
	char str[300];
	char A[26]={0};
	char a[26]={0};
	int i=0,sum=0;
	char tmp=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		tmp=str[i];
		if(tmp>='a'&&tmp<='z'){
			tmp=tmp-'a';
			a[(int)tmp]++;
		}
		else{
			if(tmp>='A'&&tmp<='z'){
			tmp=tmp-'A';
			A[(int)tmp]++;}

		
		}
	}
	for(i=0;i<26;i++){
		if(A[i]!=0){
			printf("%c=%d\n",('A'+i),A[i]);
			sum++;
		}
	}
	for(i=0;i<26;i++){
		if(a[i]!=0){
			printf("%c=%d\n",('a'+i),a[i]);
			sum++;
		}
		
	}
      
    if(sum==0)printf("No\n");




	return 0;
}