
int main()
{
	char sentence[101];
	char word[20];
	char subWord[20];
	cin.getline(sentence,100);
	cin.getline(word,20);
	cin.getline(subWord,20);
	int i,lenOfSen=0,lenOfWord=0,lenOfsubWord=0;
	int left[100],right[100];
	int found = 0;
	for(i=0;i<100;i++)
	{
		if(sentence[i]!='\0')
		{
			lenOfSen++;
		}
		if(sentence[i]=='\0')
		{
				break;
		}
	}
	for(i=0;i<20;i++)
	{
		if(word[i]!='\0')
		{
			lenOfWord++;
		}
		if(word[i]=='\0')
		{
				break;
		}
	}
	for(i=0;i<20;i++)
	{	
		if(subWord[i]!='\0')
		{
				lenOfsubWord++;
	    }
	    if(subWord[i]=='\0')
		{
				break;
		}
    }
	//xunzhao
	for(i = 0;i<lenOfSen;i++)
	{
		if(sentence[i]==word[0])
		{
			if(i==0||sentence[i-1]==' ')
			{

				left[found] = i;
				int j;
				for( j=1;j<lenOfWord;j++)
				{
					if(sentence[i+j]!=word[j])
					{
						break;
					}
				}
				if(j == lenOfWord) 
				{
					if(i+j == lenOfSen||sentence[i+j]==' ')
					{

						right[found] = i + j;
						found++;
					}
				}
			}
		}
	}
	//substitute
	char newString[200];
	int k=0;
	if(found == 0)
	{
		cout<<sentence<<endl;
	}
	else
	{
	int t =0;
	for(i =0 ;i<lenOfSen;i++)
	{
		if (i == left[t])
		{
			for(int j = 0;j<lenOfsubWord;j++)
			{
				newString[k++] = subWord[j];
			}
			i = right[t];
			if(t<found) t++;
		}
		newString[k++] = sentence[i];
	}
	newString[k]='\0';
	cout<<newString<<endl;
	}
}