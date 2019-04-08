int match (int);
int count (int);
int match (int,int,int,int);
char a[50][105],b[50][105]={0};
int num[50]={0};
int main ()
{
	for (int i=0;;i++){
		cin.getline (a[i],101);
		count (i);
		match (i);
		cout<<a[i]<<endl;
		cout<<b[i]<<endl;
	}
	return 0;
}
int count (int m)	//???????
{
	for (int i=0;a[m][i]!=0;i++)
		num[m]++;
	return 0;
}

int match (int k)	//??????
{
	for (int i=0;i<num[k];i++){
		if (a[k][i]=='(') b[k][i]='$';
		else if (a[k][i]==')') b[k][i]='?';
		else b[k][i]=' ';
	}
	while (1){
		int flag=-1,judge=0;
		for (int i=0;i<num[k];i++){
			if (b[k][i]=='$' && b[k][i+1]=='?')	{  
			b[k][i]=' '; b[k][i+1]=' ';
			judge=1;break;
		}
		else if (b[k][i]=='$' && b[k][i+1]==' ')
			flag=i;
		else if (b[k][i]=='?' && flag>=0)	
		{	
			b[k][i]=' '; b[k][flag]=' ';
			 flag=-1;judge=1;break;
		}
			}
		if (judge==0)
			break;}
	return 0;
		
	}
