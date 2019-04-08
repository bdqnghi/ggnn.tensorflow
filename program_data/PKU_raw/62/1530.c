int main()
{
 char *p=NULL;                 //????
 char string_1[1000];            //???????????
 gets(string_1);                      
 p=string_1;
 int clen,kong=0;
 clen=strlen(string_1);
 for(int i=0;i<clen;i++)
 {
  if(*(p+i)==' ')
  {
   if(*(p+i-1)==' ')
   {
	   kong++;                   //???++
    for(int j=i;j<clen-kong;j++)
	{
	 *(p+j)=*(p+j+1);
	}
	i--;
	*(p+clen-kong)='\0';            //?????????????'\0'
   }
  }
 }
 cout<<p<<endl;
}
