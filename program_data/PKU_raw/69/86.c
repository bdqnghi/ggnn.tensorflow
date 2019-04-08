int add(int maxlen,int *num1,int *num2);
char a[251],b[251];
int num1[251],num2[251],maxlen,len1,len2,highestpos;
int main()
{
   int i,j;
   cin>>a>>b;
   len1=strlen(a);
   len2=strlen(b);
   memset(num1,0,sizeof(num1));
   memset(num2,0,sizeof(num2));
   maxlen=(len1>len2)? len1:len2;
   for(i=len1-1,j=0;i>=0;i--,j++)
	   num1[i]=a[j]-'0';
   for(i=len2-1,j=0;i>=0;i--,j++)
	   num2[i]=b[j]-'0';
   highestpos=add( maxlen, num1, num2);
   for(i=highestpos;i>=0;i--)
	   cout<<num1[i];
   return 0;
}
int add(int maxlen,int *num1,int *num2)
{
   int i;
   highestpos=0;
   for(i=0;i<=maxlen;i++)
   {
      num1[i]=num1[i]+num2[i];
	  if(num1[i]>=10) 
	  {
		  num1[i]=num1[i]-10;
		  num1[i+1]++;
	  }
	  if(num1[i]) highestpos=i;
   }
   return highestpos;
}