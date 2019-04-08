


int main(int argc, char* argv[])
{
	char str[501];
	char s[500][5];
	int n;
	scanf("%d",&n);
	scanf("%s",str);
	int i,j;
	int len=strlen(str);
	int num=len-n+1;
	for(i=0;i<num;i++){
		for(j=0;j<n;j++){
		s[i][j]=str[i+j];
		}
		s[i][j]='\0';
	
	}
	int total[500];
	for(i=0;i<500;i++){
	total[i]=1;
	}
	for(i=0;i<num-1;i++){
		for(j=i+1;j<num;j++){
	if(strcmp(s[i],s[j])==0) total[i]++;

	}
	}
	int max=2,shu=0,ji[500]={0},flag=0;
	for(i=0;i<num-1;i++){
		if(total[i]>=max){
			flag=1;
	max=total[i];
		}
	}
	for(i=0;i<num-1;i++){
		if(total[i]==max){
	ji[shu]=i;
	shu++;
	}}




	if(!flag) printf("NO\n");
	else {
		printf("%d\n",max);
		for(i=0;i<shu;i++){
	
	printf("%s\n",s[ji[i]]);
		}
	}

	
	return 0;
}

