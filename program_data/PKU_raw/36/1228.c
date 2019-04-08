int main()
{   int i,j,t,sum=0;
	char a[100],b[100];
	scanf("%s %s",a,b);
	if(strlen(a)==strlen(b)){
		for(i=0;i<strlen(a)&&a[i]!='\0';i++){
			t=0;
			for(j=0;j<strlen(b)&&b[j]!='\0';j++){
				if(b[j]==a[i]){
					b[j]='0';
					t=1;
					sum++;
					break;
				}
			}
			if(t==0){
				printf("NO");
				break;
			}
		}
		if(sum==strlen(a)){
			printf("YES");
		}
	}
	else{
		printf("NO");
	}
	return 0;
}