int main(){
	int i,k,index,max,min;
	char juzi[2500],word[50][50];
	gets(juzi);
	index=0;
	for(i=0;;i++)
	{
		for(k=0;;)
		{
			if(juzi[index]!=' '&&juzi[index]!='\0')
			{
				word[i][k]=juzi[index];
				index++;
				k++;
			}
			else
			{
				word[i][k]='\0';
				index++;
				k++;
				break;
			}
		}
		if(juzi[index-1]==0)
		{
			break;
		}
	}
	max=0;
	min=0;
	for(k=1;k<=i;k++)
	{
		if(strlen(word[k])>strlen(word[max]))
		{
			max=k;
		}
		if(strlen(word[k])<strlen(word[min]))
		{
			min=k;
		}
	}
	printf("%s\n%s",word[max],word[min]);
	return 0;
}