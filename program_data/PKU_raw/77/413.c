int result[100][100]={0};
void match(char str[], int, int, char, char);
int main()
{
   char str[100], boy, girl;
   int len,len1, i, j;
   cin >> str;
   
   len = strlen(str);
   len1 = len;
   boy = str[0];
   girl = str[len-1];
   match(str, len, len1, boy ,girl);
   for(j=0;j<len;j++)
	   for(i=0;i<len;i++)
	   {
		   if (result[i][j]==1)
			   cout << i << ' ' << j << endl;
	   }
   return 0;
}
void match(char str[],int len, int len1, char boy, char girl)
{
   int i, j;
   if(len1==0) return;
   else
   {
	   for(i=0;i<len;i++)
	   {
		   if(str[i]==boy)
		   {
			  for(j=i+1; ;j++)
			  {
                if(str[j]==boy) break;
				else if(str[j]==girl)
				{
					result[i][j]=1;
					str[i]=' ';
					str[j]=' ';
                    len1 = len1 -2;
					break;
				}
				else continue;
			  }
		   }
	   }
	 match(str,len, len1, boy, girl);
   }
}