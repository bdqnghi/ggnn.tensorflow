int main()
{
	char str1[1000],str2[1000];
	int i=0,count1[53]={0},count2[53]={0},flag=1,le1,le2;
	cin>>str1;
	cin>>str2;
	le1=strlen(str1);
	le2=strlen(str2);
  for(i=0;i<=le1-1;i++)
  {
		if(str1[i]>=97)
			count1[str1[i]-70]++;
		else count1[str1[i]-64]++;

  }

	for(i=0;i<=le2-1;i++)
	{

			if(str2[i]>=97)
				count2[str2[i]-70]++;
			else count2[str2[i]-64]++;


		}
	for(i=1;i<=52;i++)
		if(count1[i]!=count2[i])
		{
			flag=0;
			break;
		}
	if(flag==0)
		cout<<"NO"<<endl;
	if(flag==1)
		cout<<"YES"<<endl;
	return 0;
}
