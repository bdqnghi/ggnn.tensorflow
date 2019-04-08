/*************************************************************************************************************
* @file .cpp
* @author ????
* @date 
* @description
*         
*/

char word[256],substring[256], replacement[256];
int l1, l2, l3;
int the_same(char* ch)
{
	int i;
	for(i = 0; i < l2; i++)
	{
		if(*(ch + i) != substring[i])
			return 0;
	}
	return 1;
}
int main()
{
	char *p = NULL, *q = NULL;
	int i, t;
	cin.getline(word, 256);
	l1 = strlen(word);
	cin.getline(substring, 256);
	l2 = strlen(substring);
	cin.getline(replacement, 256);
	l3 = strlen(replacement);
	for(i = 0; i < l1; i++)
	{
		t = the_same(&word[i]);
		if(t == 1)
		{
			p = word + i;
			break;
		}
	}
	if(p == NULL)
	{
		for(i = 0; i < l1; i++)
			cout << word[i];
	}
	else
	{
		for(q = word; q < p; q ++)
			cout << *q;
		for(i = 0;i < l3; i++)
			cout << replacement[i];
		for(q = p + l2; q < word + l1;q++)
			cout<< *q;
	}
	return 0;
}