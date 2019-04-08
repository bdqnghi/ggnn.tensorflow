int add(int maxlen,int *num1,int *num2);
int maxlen,len1,len2,highestpos,num1[256],num2[256];
char a[256],b[256];
int main()
{
   int i,j;
   cin>>a>>b;
   len1=strlen(a);
   len2=strlen(b);
   maxlen=(len1>len2)? len1:len2;
   for(i=0,j=len1-1;i<len1;i++,j--)
	   num1[i]=a[j]-'0';
   for(i=0,j=len2-1;i<len2;i++,j--)
	   num2[i]=b[j]-'0';
   highestpos=add(maxlen,num1,num2);
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

