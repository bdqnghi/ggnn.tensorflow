int main()
{   int i;
	char str1[81],str2[81];//?????????
	cin.getline(str1,81);
	cin.getline(str2,81);
	for(i=0;i<81;i++)
	{
		if(str1[i]>96)
			str1[i]-=32;
        if(str2[i]>96)
			str2[i]-=32;
	}
	if(strcmp(str1,str2)>0)
		cout<<">";
	else if(strcmp(str1,str2)<0)
		cout<<"<";
	else
		cout<<"=";
	return 0;

}
