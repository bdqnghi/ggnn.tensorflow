int main()
{   
	char str1[1000],str2[1000];
	cin>>str1>>str2;
	if((atoi(str1)==0)&&(atoi(str2)==0))
	{
		cout<<0;
		return 0;
	}
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	int num1[1000];
	memset(num1,0,sizeof(num1));
	int num2[1000];
	memset(num2,0,sizeof(num2));
	int i;
    for(i=0;i<l1;i++)
    {
    	num1[i]=str1[l1-1-i]-'0';
    }
    for(i=0;i<l2;i++)
    {
    	num2[i]=str2[l2-1-i]-'0';
    }
    int num[1000];
    memset(num,0,sizeof(num));
    int l;
    if(l1>=l2)
    {    l=l1;
    	 for(i=0;i<l1;i++)
    	 {
    	   	
    	   	num[i]=num1[i]+num2[i];
    	 }
    }
    else
    {   
	    l=l2;
    	for(i=0;i<l2;i++)
    	 {
    	   	
    	   	num[i]=num1[i]+num2[i];
    	 }
    }
    for(i=0;i<=l;i++)
    {
    	
    	if(num[i]>=10)
    	{
    	 num[i+1]=num[i+1]+num[i]/10;
    	 num[i]=num[i]%10;
        }
    }
    int p=0;
    for(i=0;i<=l;i++)
    { 
      if(num[l-i]>0)
      p=1;
      if(p>0)
      cout<<num[l-i];	
    }
    return 0;
}