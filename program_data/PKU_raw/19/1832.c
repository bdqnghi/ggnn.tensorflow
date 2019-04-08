 
int main()
{
	char s[101],a[101],b[101];
	cin.getline(s,101);
	cin.getline(a,101);
	cin.getline(b,101);
	char word[100][100];
	int len=strlen(s);//???????
	int i,j=0,n=0,flag=0;
	for(i=0;s[i]!='\0';i++)//?????s????????
	{
		if(s[i]==' ')
		{
			flag=0;
		}
		else if(flag==0)
		{
			flag=1;
			n++;
		}
	}
	int count=0;int count1[100];
	for(i=0;i<n;i++)
	{
		count1[i]=0;
		do
		{ word[i][j-count]=s[j];
		  count1[i]++;
		  j++;
		}while(s[j]!=' ' && s[j]!='\0');
		count1[i]++;
		word[i][j-count]='\0';
		j++;
		count=count+count1[i];
	}
	for(i=0;i<n;i++)//????
	{
		if(strcmp(word[i],a)==0)
		{
			strcpy(word[i],b);
		}
	}
	for(i=0;i<n-1;i++)//?????????
	{
		cout<<word[i]<<" ";
	}
	cout<<word[n-1];
	cout<<endl;
	return 0;
}
 
