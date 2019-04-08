char str1[1000];
char str2[1000];
void paixu(char a[]);
int main(){
	scanf("%s",&str1);
	scanf("%s",&str2);
	if (strlen(str1)!=strlen(str2)){
		printf("NO\n");
		return 0;
	}
	paixu(str1);
	paixu(str2);
	int len=strlen(str1);
	int check=1;
	int i;
	for(i=0;i<len;i++){
		if (str1[i]!=str2[i]) {
			check=0;break;}
	}
	if (check==1){
		printf("YES\n");
	}
	else
	{
	printf("NO\n");
	}



	return 0;
}
void paixu(char a[]){
	int len=strlen(a);
	int i,j;
	for(j=0;j<len-1;j++)
		for(i=0;i<len-1-j;i++){
			if (a[i]>a[i+1]){
				char temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		
		}
}
