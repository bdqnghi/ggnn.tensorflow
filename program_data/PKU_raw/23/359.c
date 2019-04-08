int main()
{
	int a[50]={0};
	char str[100],de[50][100];
	cin.getline(str,100);
	int i,k,j=0;
	for(i=0;str[i]!='\0';i++)
	{
	  if(str[i]!=' ')
	  {
      de[j][a[j]]=str[i];
	  a[j]++;
	  }
	  else
	  {
		  j++;
		  
	  }
	}
	for(i=j;i>0;i--)
	{
		for(k=0;k<a[i];k++)
		{
			cout << de[i][k];
		}
		cout <<" ";
	}
   for(k=0;k<a[0];k++)
		{
			cout << de[0][k];
		}
	return 0;
	}