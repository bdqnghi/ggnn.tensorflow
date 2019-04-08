int main()
{   int i,j,t,MAXLEN,flag=0;
	char s1[500],s2[500];
	int a1[500]={0},a2[500]={0},a[500]={0};
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;i<strlen(s1);i++){
		a1[strlen(s1)-1-i]=s1[i]-'0';
	}
	for(i=0;i<strlen(s2);i++){
		a2[strlen(s2)-1-i]=s2[i]-'0';
	}
	MAXLEN=(strlen(s1)>=strlen(s2))?strlen(s1):strlen(s2);
	for(i=0;i<MAXLEN;i++){
		t=a1[i]+a2[i]+a[i];
		if(t>=10){
			if(i!=MAXLEN-1){
				a[i]=t%10;
				a[i+1]=1;
				j=MAXLEN;
			}
			else{
				a[i]=t%10;
				a[i+1]=1;
				j=MAXLEN+1;
			}
		}
		else{
			a[i]=t;
			j=MAXLEN;
		}
	}
	for(i=j-1;i>=0;i--){
		if(a[i]!=0){
			flag=1;
			if(flag){
				printf("%d",a[i]);				}
			}
		else{
			if(flag){
				printf("%d",a[i]);
			}
		}
	}
	if(flag==0){
		printf("0");
	}
	return 0;
}