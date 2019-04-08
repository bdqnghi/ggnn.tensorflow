int main()
{ 
    int strNnum=0,strMnum=0,max,min,maxstr=0,minstr=0,i,len;
    char string[50][20],ch;
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

    max=min=strlen(string[0]);
    for(i=1;i<=strNnum;i++)
	{
      len=strlen(string[i]);
      if(len>max)
	  {
		  maxstr=i;
		  max=len;
	  }
      if(len<min)
	  {
		  minstr=i;
	      min=len;
	  }
	}
    printf("%s\n%s\n",string[maxstr],string[minstr]);
    return 0;
}
