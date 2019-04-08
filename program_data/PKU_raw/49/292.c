/*????????
  ????00948344 ??
  ?????2010//12/31
*/


int main(){
	char str[500];
	cin>>str;
	int i,j,k,l,len;
	len=strlen(str);
	for(i=2;i<len;i++)
	{
		for(j=0;j<len+1-i;j++)
		{
			for(k=j,l=j+i-1;k<l;k++,l--)
			{
				if(str[k]!=str[l])
					break;
			}
			if(k>=l)
			{
				for(k=j;k<j+i;k++)
					cout<<str[k];
				cout<<endl;
			}
		}
	}
	return 0;
}

   
