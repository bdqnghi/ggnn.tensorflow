// 44.cpp : Defines the entry point for the console application.
//

 
int main() 
{
	char s[30];
	gets(s);
	int i;
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>='0'&&s[i]<='9'&&(s[i+1]>='0'&&s[i+1]<='9')){
			printf("%c",s[i]);
		}
		if(s[i]>='0'&&s[i]<='9'&&(s[i+1]<'0'||s[i+1]>'9')){
			printf("%c\n",s[i]);
		}
	}
	return 0;
} 
     
