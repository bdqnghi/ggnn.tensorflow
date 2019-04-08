
struct node
{
	char str[110];
}all[110];

int main()
{
	char s[110], str[110], word[110], one[110];
	int i, j, k;
	gets(s);
	gets(str);
	gets(word);

	for(k=0, j=0, i=0;  ; i++){
		if(s[i]==' ' || s[i]=='\0'){
			one[j] = '\0';
			strcpy(all[k].str, one);
			j=0; 
			k++;
			if(s[i]=='\0')
				break;
			continue;
		}
		one[j++] = s[i];
	}

	for(i=0; i<k; i++){
		if(strcmp(all[i].str, str)==0)
			strcpy(all[i].str, word);
	}

	for(i=0; i<k; i++){
		if(i<k-1)
			printf("%s ", all[i].str);
		else
			printf("%s", all[i].str);
	}
	
	return 0;
}