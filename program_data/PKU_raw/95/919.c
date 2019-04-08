//????
//10.11.19
int main()
{
	int i,flag;
	char str1[81],str2[81];//??
	cin.getline(str1,80,'\n');//??
	cin.getline(str2,80,'\n');
	for(i=0;(str1[i]!='\0')&&(str2[i]!='\0');i++)
	{
		if(str1[i]>90)
			str1[i]-=32;
        if(str2[i]>90)
			str2[i]-=32;
	}
	for(i=0;(str1[i]!='\0')&&(str2[i]!='\0');i++)//????
	{
		if(str1[i]>str2[i])
		{flag=1;break;}
		else if(str1[i]<str2[i])
		{flag=-1;break;}
		else 
		{flag=0;continue;}
		//cout<<abs(str1[i]-str2[i])<<endl;//??
	
	}
	//cout<<flag<<endl;//??
	switch(flag)//????
	{
	    case 1:cout<<">"<<endl;break;
		case -1:cout<<"<"<<endl;break;
		case 0:cout<<"="<<endl;break;
	}
	return 0;
}
