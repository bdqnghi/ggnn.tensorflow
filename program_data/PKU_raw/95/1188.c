int main()
{
	char str1[80];
	char str2[80];
	int len1,len2,i,j,n;
	cin.getline(str1,80);
	cin.getline(str2,80);
	n=0;
	for(len1=0;str1[len1]!='\0';len1++);
	for(len2=0;str1[len2]!='\0';len2++);
	j='A'-'a';
	for(i=0;i<=len1;i++)
	{
		if( (str1[i]!=str2[i]) && ((str1[i]-str2[i])!=j) && ((str2[i]-str1[i])!=j) )
		{
			if(str1[i]<str2[i]) 
			{
			    if((str1[i]-j)<str2[i]) {cout<<'<';break;}
			    else {cout<<'>';break;} 
			}
			if(str1[i]>str2[i]) 
			{
			     if((str1[i]+j)<str2[i]) {cout<<'<';break;}
			     else {cout<<'>';break;} 
			}
		}
		n++;
	}
	if (n==(len1+1)) cout<<'=';
return 0;
}