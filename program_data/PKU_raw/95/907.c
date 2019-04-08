int main()
{
	char str1[80],str2[80];
	int i,j,len1,len2,len;
	char flag;//???????????
	cin.getline(str1,80);
	cin.getline(str2,80);//???????
		for(i=0;str1[i]!='\0';i++) //???????
            len1=i+1;
        for(j=0;str2[j]!='\0';j++)
			len2=i+1;
		if(len1<len2)
			len=len1;
		else
			len=len2;
		for(i=0;i<len;i++)
		{
			if(str1[i]>=97&&str1[i]<=122)
				str1[i]-=32;//?ASC???????
		}
		for(i=0;i<len;i++)
		{
			if(str2[i]>=97&&str2[i]<=122)
				str2[i]-=32;
		}
		for(i=0;i<len;i++)//??????
		{
			if(str1[i]==str2[i])
				flag='=';
			else if(str1[i]<str2[i])
			{
				flag='<';
                break;
			}
			    else
				{
				  flag='>';
				  break;
				}
		}
		cout<<flag<<endl;
	return 0;
}