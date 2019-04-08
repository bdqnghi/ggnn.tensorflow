int main()
{
	int i, k=0, a, n;
	char word[500][40]={0};
	char para[50][82]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%s", word[i]);
	strcat(para[k], word[0]);
	for(i=1;i<n;i++){
        if(strlen(para[k])+strlen(word[i])+1<=80){
			strcat(para[k], " ");
			strcat(para[k], word[i]);
		}
		else{
			//printf("%d", strlen(para[k]));
			k++;
			strcat(para[k], word[i]);
		}
	}
	for(i=0;i<=k;i++)
		printf("%s\n", para[i]);
	return 0;
}