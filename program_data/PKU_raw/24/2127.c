int main()
{
	char str[200][200],s[4000];
	int i=0,j=0,p=0,length[200],max,min;
	
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]==' ')
		{
				str[j][i-p]='\0';
				j++;
				p=i+1;
		}
		else if(s[i]!=',')
			str[j][i-p]=s[i];
	}
	str[j][i-p]='\0';


	for(i=0;i<=j;i++){
		length[i]=strlen(str[i]);
	}
	j++;
	max=min=0;
	for(i=0;i<j;i++){
		if(length[max]<length[i])
			max=i;
		if(length[min]>length[i])
			min=i;
	}
	printf("%s\n%s\n",str[max],str[min]);
	return 0;
}
