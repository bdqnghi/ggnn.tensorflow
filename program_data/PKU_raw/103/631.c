int main()
{
	char m;
	char temp='*';
	int cnt=0;
	int char_cnt=1;
	int TRUE=1;
	while(TRUE)
    {
               scanf("%c",&m);
               ++cnt;
	           if(m>=97&&m<=122)      m=m-32;
	           if(m==temp)            char_cnt++;
	           else if(temp=='*');
	           else
               {
                                 printf("(%c,%d)",temp,char_cnt);
		                         char_cnt=1;		                         
               }
	           temp=m;
	           if(m=='\n') break;
	}
	return 0;
}