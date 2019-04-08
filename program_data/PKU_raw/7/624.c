int main(){
	char s[256], s1[256], s2[256], ss[20], re[20];
	int i, j, x=0, y=0, a, flag=0;
	gets(s);
	scanf("%s%s", ss, re);
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=ss[0]){
			s1[x]=s[i];
			x++;
		}
		else if(s[i]==ss[0]){
			a=i;
			flag=1;
			for(j=0;ss[j]!='\0';j++){
				if(ss[j]!=s[a]){
					flag=0;
				}
				a++;
			}
			if(flag==0){
				s1[x]=s[i];
				x++;
			}
		}
		if(flag==1){
			s1[x]='\0';
			break;
		}
	}
	if(flag==1){
		for(i+=strlen(ss);s[i]!='\0';i++){
			s2[y]=s[i];
			y++;
		}
	}
	s2[y]='\0';
	if(flag==1){
		printf("%s%s%s", s1, re, s2);
	}
	if(flag==0){
		printf("%s", s);
	}
	return 0;
}