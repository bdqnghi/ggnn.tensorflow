int main()
{
	char i,s1[80],s2[80];
	cin.getline(s1,81);
	cin.getline(s2,81);
	for(i=0;s1[i]!='\0';i++)
		if(s1[i]>=65 && s1[i]<=90)
			s1[i]+=32;
	for(i=0;s2[i]!='\0';i++)
		if(s2[i]>=65 && s2[i]<=90)
			s2[i]+=32;
	if(strcmp(s1,s2)>0)
		cout<<'>';
	if(strcmp(s1,s2)==0)
		cout<<'=';
	if(strcmp(s1,s2)<0)
		cout<<'<';
	return 0;


}
