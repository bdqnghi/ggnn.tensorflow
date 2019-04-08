int main()
{
	char sen1[81],sen2[80];
	cin.getline(sen1,80);
	cin.getline(sen2,80);//????? 
	int n = strlen(sen1), m = strlen(sen2);
	for (int i = 0; i < n; i++) sen1[i] = tolower(sen1[i]);
	for (int i = 0; i < m; i++) sen2[i] = tolower(sen2[i]);//????? 
	puts(strcmp(sen1,sen2)==0?"=":(strcmp(sen1,sen2)>0?">":"<"));//??????? 
	return 0;
}