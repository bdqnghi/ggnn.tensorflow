int main(int argc, char* argv[])
{
	int len1,len2,i,j,x,tag=0;
	char s1[300],s2[300],s3[300];
	scanf("%s",s1);
	scanf("%s",s2);
	scanf("%s",s3);
	len1=strlen(s1);
	len2=strlen(s2);
	for(i=0;i<=len1-len2;i++){
		for(j=i;j<i+len2;j++){
			if(s1[j]!=s2[j-i]){
				break;
			}
			if(j==i+len2-1){
				tag=1;
				x=i;
			}
		}
		if(tag){
			break;
		}
	}
	if(tag){
		for(i=0;i<x;i++){
			printf("%c",s1[i]);
		}
		printf("%s",s3);
		for(i=x+len2;i<len1;i++){
			printf("%c",s1[i]);
		}
	}
	else{
		printf("%s",s1);
	}
	return 0;
}

