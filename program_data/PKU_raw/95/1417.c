int main( )
{	int i;
	char a[100],b[100];
    cin.getline(a,100);
    cin.getline(b,100);
	for(i=0;i<100;i++)
	{
		if((a[i]>=97)&&(a[i]<=122))
			a[i]=a[i]-32;
	}
	for(i=0;i<100;i++)
	{
		if((b[i]>=97)&&(b[i]<=122))
			b[i]=b[i]-32;
	}
	if(strcmp(a,b)==0) cout<<'=';
	else if(strcmp(a,b)>0) cout<<'>';
	else if(strcmp(a,b)<0) cout<<'<';
	return 0;
}