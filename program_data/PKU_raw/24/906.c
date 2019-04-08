int main()
{
	char letter[1000];
	char word[50][20];
	gets(letter);
	int length,i,j=0,k=0,tmp1,tmp2,tmp;
	int maxlength=0,minlength=0;
	length=strlen(letter);
    
	for(i=0;i<length;i++)
	{
		if(letter[i]!=' ')
		{
			word[j][k]=letter[i];
			k++;
		}
        if(letter[i]==' ')
		{
			word[j][k]='\0';
			j++;
			k=0;
			
		}
		if(i==length-1)
		{
			word[j][k]='\0';
		}

	}
	

	tmp1=strlen(word[0]);
	tmp2=strlen(word[0]);

	for(i=1;i<=j;i++)
	{
		tmp=strlen(word[i]);
		if(tmp1<tmp)
		{
			tmp1=tmp;
			maxlength=i;
		}
		if(tmp2>tmp)
		{
			tmp2=tmp;
			minlength=i;
		}
	
			
	}
	printf("%s\n",word[maxlength]);
	printf("%s\n",word[minlength]);



		return 0;
}
