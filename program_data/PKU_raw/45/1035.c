int b[50];
int main()
{
	char s1[50],s2[50];
	scanf("%s %s",s1,s2);
	int i;
	int count=0;
	for(i=0;s2[i]!='\0';i++){
		if(s2[i]==s1[0]){
	    count++;
	    if(count==1)
			printf("%d",i);
		}
	}
	return 0;
}

