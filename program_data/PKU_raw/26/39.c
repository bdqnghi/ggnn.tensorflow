//-----------------
//  ??????
//    Version 2.0
//     ???
//-----------------


int main()
{
	int i=0,j=0,blank=0,words=0,temp=0;          //i,j??, blank?????????,words?????
	char str[101];
	cin.get(str,101,'\n');  //????
	while(str[i]!='\0')
	{
		if(str[i]==' ') 
		{
			if(str[i-1]!=' ')
	    		words++;		
			 temp++;
			 str[i-blank+words-1]=str[i];
		}

        if(str[i]!=' '&&(blank!=words))
		{
			blank=blank+temp;
			temp=0;
			str[i-blank+words]=str[i];
		}
		i++;
	}
	str[i-blank+words]='\0';
	cout<<str;
	return 0;
}