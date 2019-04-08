int main()
{
	char a[1][100]={'\0'};
	char b[100][100]={'\0'};
	cin.getline(a[0],100);//????
	int i,num,k,x=0,p=0;
	num=strlen(a[0]);
	a[0][num]='\n';
	for(i=0;i<num+1;i++)
	{   
		if(a[0][i]==' '||a[0][i]=='\n')
		{    
			for(k=x;k<i;k++)
			{
             b[p][k-x]=a[0][k];   
			}p++;x=i+1;
		}
	}
	int m;
	for(m=0;m<p-1;m++)
	{cout<<b[p-1-m]<<" ";
	}cout<<b[0];


    getchar();
	getchar();
	return 0;
}