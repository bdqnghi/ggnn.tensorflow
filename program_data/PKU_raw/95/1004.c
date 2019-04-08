int main(int argc)
{   char str1[82],str2[82],i,n;
    int t;
    cin.getline(str1,80);
	cin.getline(str2,80);
	i=0;
	n=0;
	while(i<=79)
	{ if (str1[i]<91&&str1[i]>64)
	{ str1[i]=str1[i]+32;}
	if (str2[i]<91&&str2[i]>64)
	{ str2[i]=str2[i]+32;}
    i++;}
    t=strcmp(str1,str2);
	if (t>0)
	{cout<<">";}
	if (t==0)
	{cout<<"=";}
	if (t<0)
	{cout<<"<";}
	return 0;
}

