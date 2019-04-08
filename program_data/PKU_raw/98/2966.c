int main()
{
	int n;
	int num=0;
	int linelen=0;
	char a[45]={0};
	cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a;
		num=strlen(a);          //&Ecirc;&auml;&Egrave;&euml;&Ograve;&raquo;&cedil;&ouml;&micro;&yen;&acute;&Ecirc;&pound;&not;&frac14;&Ccedil;&Acirc;&frac14;&sup3;¤&para;&Egrave;
		if(num+1+linelen>80)    //&Egrave;&ccedil;&sup1;&ucirc;&Otilde;&acirc;&cedil;&ouml;&micro;&yen;&acute;&Ecirc;&micro;&Auml;&sup3;¤&para;&Egrave;&frac14;&Oacute;&Eacute;&Iuml;&Ccedil;°&Atilde;&aelig;×&Ouml;·&ucirc;&acute;&reg;&sup3;¤&para;&Egrave;&acute;ó&Oacute;&Uacute;80&micro;&Auml;&raquo;°
		{
			cout<<endl<<a;  //&Iuml;&Acirc;&Ograve;&raquo;&Ntilde;ù&Ecirc;&auml;&sup3;&ouml;&Otilde;&acirc;&cedil;&ouml;&micro;&yen;&acute;&Ecirc;
			linelen=num;         //&sup2;&cent;&Ccedil;&Ograve;&Ouml;&Oslash;&Ouml;&Atilde;&Iuml;&Acirc;&Ograve;&raquo;&ETH;&ETH;&micro;&yen;&acute;&Ecirc;&sup3;¤&para;&Egrave;
		}
		else
		{
			if(linelen !=0){
				linelen+=num+1;
				cout<<" ";
			}
			else{
				linelen=num;
			}
			cout<<a;   //&Ecirc;&auml;&sup3;&ouml;&cedil;&Auml;&micro;&yen;&acute;&Ecirc;+&iquest;&Otilde;&cedil;&ntilde;
		}
	}
	cin>>n;
	return 0;
}
