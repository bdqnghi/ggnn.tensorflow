void main()
{ 

    int strNnum=0,strMnum=0,max,min,maxstr=0,minstr=0,i,len;
    char string[50][15],ch;

    while((ch=getchar())!='\n')
	{
     if(strMnum!=0&&(ch==' '))
	 {
       string[strNnum][strMnum]='\0';
       strNnum++;strMnum=0;
	 }
     else
      if(ch!=' ')
	  {
        string[strNnum][strMnum]=ch;
        strMnum++;
	  }
	}
    string[strNnum][strMnum]='\0';
	for(i=strNnum;i>0;i--)
		printf("%s ",string[i]);
	printf("%s",string[0]);

}
