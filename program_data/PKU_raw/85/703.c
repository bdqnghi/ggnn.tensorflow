int main(int argc, char* argv[])
{
char s[1000][20];
int i,j;
int len;
int k=0;
int n;
scanf("%d",&n);
for(i=0;i<n;i++){
  scanf("%s",s[i]);
}
for(i=0;i<n;i++){   
	k=0;
	len=strlen(s[i]);
	if((s[i][0]=='_')||((s[i][0]>='A')&&(s[i][0]<='Z'))||((s[i][0]>='a')&&(s[i][0]<='z'))){
		for(j=1;j<len;j++){
			if((s[i][j]=='_')||((s[i][j]>='A')&&(s[i][j]<='Z'))||((s[i][j]>='a')&&(s[i][j]<='z'))||((s[i][j]>='0')&&(s[i][j]<='9'))){k++;}
		}
		if(k==(len-1))
		{
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}else{
		printf("no\n");
	}
}
return 0;
}

