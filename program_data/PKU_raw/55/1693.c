int main()
{
	int a,b,i,j,la,lb,decimal,number=0,t;
	char str1[1000],str2[1000]={'\0'};
	cin>>a;
	cin.get();
	cin.getline(str1,1000,' ');
	cin>>b;
	la=strlen(str1);
	for(i=0;i<la;i++)
	{
		
      if (str1[i] >= '0' && str1[i] <= '9')    
             decimal = str1[i] - '0';
      else if(str1[i]>='A'&&str1[i]<='Z')
      		decimal = str1[i] - 'A' + 10;
	  else
		  decimal=str1[i]-'a'+10;
      number = number * a + decimal;  
    }
	i=0;
	do
	{
		str2[i]=number%b;
		if(str2[i]>9)
			str2[i]=str2[i]-10+'A';
		else str2[i]=str2[i]+'0';
		number=number/b;
		i++;
	}
	while(number!=0);
	t=i;
	for(j=t-1;j>=0;j--)
	{
		cout<<str2[j];
	}
	
	return 0;
}