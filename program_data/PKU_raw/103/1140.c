
int main()
{
	int i,k,len;
	char s[1001],c;

	gets(s);

	len=strlen(s);

	

	for(i=0;i<len;i++)
	{ 
		k=1;
		c=s[i];
		if((c>=97)&&(c<=122))
			c=c-32;
        
		while((s[i+1]==c)||(s[i+1]==c+32))
		{i++;
		k++;}
        
		printf("(%c,%d)",c,k);

	}
	return 0;
}
