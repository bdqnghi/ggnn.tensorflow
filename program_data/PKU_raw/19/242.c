
int main(int argc, char* argv[])
{
	char s1[100],s2[10],s3[10];
	gets(s1);
	gets(s2);
	gets(s3);
	char s4[10];
	int a, b=0;
	a=strlen(s1);
	for(int i=0;i<a;i++){
		if(s1[i]!=' '){
			if(i!=a-1){
				s4[b]=s1[i];
				b++;
			}
			if(i==a-1){
				s4[b]=s1[i];
				s4[b+1]='\0';
				if(strcmp(s4,s2)==0){
					printf("%s",s3);
				}
				else{
					printf("%s",s4);
				}
			}
		}
		else{
			s4[b]='\0';
			b=0;
			if(strcmp(s4,s2)==0){
				printf("%s ",s3);
			}
			else{
				printf("%s ",s4);
			}
		}
	}
	return 0;
}
