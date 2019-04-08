int main(int argc, char* argv[])
{
	char s1[80],s2[80];
	int i,a,b,p=0;
	gets(s1);
	gets(s2);
	a=strlen(s1);
	b=strlen(s2);
	for(i=0;i<a;i++){
		if(s1[i]>='A'&&s1[i]<='Z')
			s1[i]+=32;
	}
    for(i=0;i<b;i++){
		if(s2[i]>='A'&&s2[i]<='Z')
			s2[i]+=32;
	}
	for(i=0;i<a&&i<b;i++){
		if(s1[i]==s2[i])
			continue;
		else if(s1[i]>s2[i]){
			printf(">");
			p=1;
		    break;
		}
		else if(s1[i]<s2[i]){
			printf("<");
			p=1;
		    break;
			}
	}
	if(p==0)
			printf("=");
	return 0;
}



