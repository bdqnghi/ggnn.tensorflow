int main()
{
	int h=0,k=0,i,j,len;
	char zfc[1000];
	char word[50][20];
	char temp[50];
	gets(zfc);
	for(i=0;i<strlen(zfc)+1;i++){
		if(zfc[i]!=' '){
		word[h][k]=zfc[i];
		k++;
		}
		else if(zfc[i]=='\0')
		{
			word[h][k]='\0';
		}
		else 
		{
			word[h][k]='\0';
			h++;
			k=0;
		}
	}
	
	len=h+1;
	 for(j=1;j<=len;j++){
		for(h=0;h<len-j;h++){
			if(strlen(word[h])>strlen(word[h+1])){
				strcpy(temp,word[h]);
				strcpy(word[h],word[h+1]);
				strcpy(word[h+1],temp);
			} 
		}
	 }
  puts (word[len-1]);
  puts (word[0]);
  return 0;
}
