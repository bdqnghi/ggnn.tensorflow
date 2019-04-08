int main()
{
	char s[300],t[300];
	int i,j=0,k,m;
	char zm[27]="abcdefghijklmnopqrstuvwxyz";
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='a'&&s[i]<='z'){
			t[j]=s[i];
			j++;
		}
	}
	t[j] = '\0';
	if(t[0]=='\0') printf("No");
	else{
		for(i=0;zm[i]!='\0';i++){
			m=0;
			for(k=0;t[k]!='\0';k++){
				if(zm[i]==t[k]) m++;
			}
			if(m!=0)
				printf("%c=%d\n",zm[i],m);
		}
	}
	return 0;
}