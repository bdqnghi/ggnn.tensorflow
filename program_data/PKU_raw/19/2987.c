int main()
{
	char a[300],b[100],c[100],d[100][20]={0};//????
	int i,j=0,k=0,l;
	cin.getline(a,300);//??????
	cin.getline(b,100);//????????
	cin.getline(c,100);//????????
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		d[j][k]=a[i];
		k=k+1;
		if(a[i+1]==' '||i==l-1)
		{
			j=j+1,k=0,i=i+1;
		}
	}//?a?????????d[j]
	for(i=0;i<j;i++)
		if(strcmp(d[i],b)==0)strcpy(d[i],c);//??d????
	cout<<d[0];
	for(i=1;i<j;i++)
		cout<<" "<<d[i];//??
	return 0;
}