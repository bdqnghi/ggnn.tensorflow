int main()
{
	char a[100]={0};
	char c[100]={0};
	char d[100]={0};
	cin.getline(a,100);//??
	cin>>c;
	cin>>d;
	char b[100][100]={0};
	int i,num,k=0,p=0;
	num=strlen(a);
	a[num]='\n';
	for(i=0;i<num+1;i++)//??
	{
		
		b[k][p]=a[i];
		p++;
		if(a[i]==' '||a[i]=='\n')
		{
			b[k][p-1]=0;
			k++;
			p=0;
        }
		
	}
	int num1;
	num1=strlen(d);
	for(i=0;i<k+1;i++)
	{
		if(strcmp(b[i],c)==0)//??
		{
			for(p=0;p<100;p++)
			{
			  b[i][p]=0;
			}
			for(p=0;p<num1;p++)
			{
				b[i][p]=d[p];
			}
		}
	}
	for(i=0;i<k-1;i++)//??
	{
		cout<<b[i]<<" ";
	}cout<<b[k-1];
	
	return 0;
	
}