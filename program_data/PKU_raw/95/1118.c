
int main()
{
    char str1[100];
	char str2[100];       //?????
	int i,n1,n2;
	cin.getline(str1,100,'\n');   //?????
	cin.getline(str2,100,'\n');
	n1 = strlen (str1); // ??????
	n2 = strlen (str2);
	for(i=0; i<n1; i++)
	{
		if(str1[i]>='A' && str1[i]<='Z')  //???????
				str1[i] = str1[i]+32;
	}
	for(i=0; i<n2; i++)
	{
		if(str2[i]>='A' && str2[i]<='Z')  //???????
				str2[i] = str2[i]+32;
	}
	if( strcmp (str1,str2)==0 )        //????
		cout<< "=" <<endl;
	if( strcmp (str1,str2)>0 )
	    cout<< ">" <<endl;
	if( strcmp (str1,str2)<0 )
		cout<< "<" <<endl;
    return 0;
}