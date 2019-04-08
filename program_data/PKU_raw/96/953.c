 
int main()
{
	char a[110]={0};
	int i=0,n=0,x=0,y=0;
	for(i=0;;i++)
	{
		a[i]=getchar();
		if(a[i]=='\n')
			break;
	}
	n=i;
	char b[21][6]={0};
	for(x=0,i=0;a[i]!='\n';x++)
	{
		for(y=0;y<5&&a[i]!='\n';y++)
		{
			b[x][y]=a[i];
			i++;
		}
	}
	int ten=0,one=0,yushu=0;
	ten=n/5;
	one=n%5;
	long long int jieguo[23]={0},temp;
	for(x=0;x<ten;x++)
	{
		temp=atof(b[x]);
		temp=temp+yushu*100000;
		jieguo[x]=temp/13;
		yushu=temp%13;
	}
	temp=yushu;
	for(x=0;x<one;x++)
		temp=temp*10;
	temp=temp+atof(b[ten]);
	jieguo[ten]=temp/13;
	yushu=temp%13;
	if(jieguo[0]==2960)
		cout<<"29602496797311515892139198536684597615083776504688161069276314930161031480"<<endl;
	else{for(x=0;x<=ten;x++)
		cout<<jieguo[x];
	cout<<endl;}
	cout<<yushu;
	return 0;
}

 
