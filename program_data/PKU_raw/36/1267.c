
int main(int argc, char *argv[])
{
	char w1[100]={' '},w2[100]={' '};
	int len1,len2,i,j,temp;
	scanf("%s",w1);	len1=strlen(w1);
	scanf("%s",w2);	len2=strlen(w2);
	for(j=0;j<len1-1;j++){
		for(i=len1-1;i>j;i--){
			if(w1[i]<w1[i-1]){
				temp=w1[i];w1[i]=w1[i-1];w1[i-1]=temp;
			}
		}
	}
	for(j=0;j<len2-1;j++){
		for(i=len2-1;i>j;i--){
			if(w2[i]<w2[i-1]){
				temp=w2[i];w2[i]=w2[i-1];w2[i-1]=temp;
			}
		}
	}
	if(strcmp(w1,w2)==0)	printf("YES");
	else	printf("NO");
	return 0;
}