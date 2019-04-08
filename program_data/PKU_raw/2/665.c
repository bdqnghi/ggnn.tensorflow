
int main()
{
	int m;
	cin>>m;
	int num[1001];
	
	char name[1001][27];
	for(int i=0;i<m;++i)
	{
	   cin>>num[i];
	   cin.get();
	   cin.getline(name[i],27);
    }
	int count[100];memset(count, 0, sizeof(count));
	int record[27][1000];
	int start=0;
	int i,j;
	 char call;
	for( i=0;i<m;i++)
	{
	   for( j=0;j<strlen(name[i]);j++)
	   {
	      count[name[i][j]]++;
		   //call=name[i][j]-'A';
		  //record[call][start++]=num[i];
	   }
	}
	int max=0,k=0;
	char t;
	for(char w = 'A';w<='Z';w++)
	{
	   if(count[(int)w]>max)
		  { max=count[(int)w];
	   t=w;
	   }
    }
	cout<<t<<endl;
   cout<<max<<endl;
  for( i=0;i<m;i++)
	{
	   for( j=0;j<strlen(name[i]);j++)
	   {
	   if(name[i][j]==t)
	   {cout<<num[i]<<endl;  continue;  }
	   }
  }

   return 0;
}
