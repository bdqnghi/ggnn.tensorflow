void main()
{
	int i,j;
	char word[40],Max_word[40]="",Min_word[40]="afwefjaklwejfioajwe";
	do
	{
		scanf("%s",word);
		if (strlen(word)>strlen(Max_word)) strcpy(Max_word,word);
		if (strlen(word)<strlen(Min_word)) strcpy(Min_word,word);
	} while (getchar()!='\n');
	puts(Max_word);
	puts(Min_word);
}