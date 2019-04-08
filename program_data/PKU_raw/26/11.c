//-----------------
//  ??????
//    ????
//     ???
//-----------------


int main()
{
	int i=0,j=0,blank=0;          //i,j??, blank?????
	char str[101];
	cin.get(str,101,'\n');  //????
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			blank++;
	    	if(str[i+1]!=' ')
	    	{
			   if(blank>1) 
			   {
				   j=i+1;
				   while(str[j]!='\0')
				   {
					   str[j-blank+1]=str[j];
					   j++;
				   }
				   str[j-blank+1]='\0';
				   i=i-blank+1;
				   blank=0;
			   }
			   if(blank==1) blank=0;
	    	}
		}
		i++;
	}
	for(j=0;j<i;j++)
		cout<<str[j];
	return 0;

}
