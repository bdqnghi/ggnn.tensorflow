int main()
{
	char str[100], word[100][100]={0}, a[100], b[100];
	int i, j, k=0, k1=0, k2=0, sl;
	gets(str);
	gets(a);
	gets(b);
	sl=strlen(str);
	for(i=0;i<sl;i++){
		if(str[i]==' '||i==sl-1){
			for(j=k;j<i;j++,k2++)
				word[k1][k2]=str[j];
			if(i==sl-1)
				word[k1][k2]=str[i];
			k1++;
			k2=0;
			k=i+1;
		}
	}
	for(i=0;i<k1;i++){
		if(strcmp(word[i], a)==0)
			strcpy(word[i], b);
	}
	for(i=0;i<k1;i++){
		if(i!=0)
			printf(" ");
		printf("%s", word[i]);
	}
	return 0;
}