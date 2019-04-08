int main()
{
	char str[101]={0},str1[101];
	int i,j,q;
	cin.getline(str,101);
		for(i=0,j=0; str[i]!='\0';)
			if(str[i]==' ')
			{
				if(str[i+1]==' ')
					i++;
				else
				{
					str1[j]=str[i];
				    i++;
					j++;
				}
			}
		
			else
			{
				str1[j]=str[i];
			    i++;
				j++;
			}
	    for(q=0;q<j;q++)
			cout<<str1[q];
		cout<<endl;
	  return 0;
}
