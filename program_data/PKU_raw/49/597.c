char * my_strrev(char *str);
int main()
{
	int t,i;
	char str[1000];
	gets(str);t=2;
	char subStr[101], revSubStr[101];
	while(t<=strlen(str))
	{
		for(i=0;i<=strlen(str)-t;i++)
		{
			strncpy(subStr,str+i,t);
			strncpy(revSubStr,str+i,t);
			subStr[t] = revSubStr[t] = '\0';
			my_strrev(revSubStr);
			if(strcmp(subStr,revSubStr)==0)
			{
				cout<<subStr<<endl;
			}
		}
		t++;
	}
	
	return 0;
}
char * my_strrev(char *str)

{

   char *right = str;

   char *left = str;

   char ch;

   while (*right)   right++;

   right--;

   while (left < right)

   {

       ch = *left;

        *left++ = *right;

        *right-- = ch;

   }

   return(str);

}