int main ()
{
	char a[100],b[100],c;
	int i,j=0,k=0,m;
	cin.get(a,100,'\n');
	for(k=0;k<=100;k++)
	  for(i=0;i<=100;i++)
		if(a[i]==' '&&a[i+1]==' ')
		{
			for(j=i+1;j<=100;j++)
			a[j]=a[j+1];
		}
	for(i=0;a[i]!='\0';i++)
	cout<<a[i];
	return 0;
}