int main()
{
   const int maxlen=250;
   int an1[maxlen],an2[maxlen];
   char str1[maxlen+1],str2[maxlen+1];
   cin.getline(str1,maxlen+1);
   cin.getline(str2,maxlen+1);
   int len1=strlen(str1);
   int len2=strlen(str2);
   if(len1==1&&len2==1&&str1[0]=='0'&&str2[0]=='0')
	   cout<<0<<endl;
   else
  { memset(an1,0,sizeof(an1));
   memset(an2,0,sizeof(an2));
   int i,j=0;
   for(int i=len1-1;i>=0;i--)
	   an1[j++]=str1[i]-'0';
   j=0;
    for(int i=len2-1;i>=0;i--)
	   an2[j++]=str2[i]-'0';
	for(int i=0;i<maxlen;i++)
	{
		an1[i]=an1[i]+an2[i];
		if(an1[i]>9)
		{
			an1[i]=an1[i]-10;
			an1[i+1]++;
		}
	}
	i=maxlen-1;
	while(an1[i]==0)
		i--;
	for(;i>=0;i--)
		cout<<an1[i];
	cout<<endl;
   }
return 0;
}
