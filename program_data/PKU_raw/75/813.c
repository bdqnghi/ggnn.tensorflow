int main()
{
	char a[10000],b[10000];
	int x[10000], y[10000], c[10000];
	int i,j, p;
	gets(a);
	gets(b);
	char* z=strtok(a,",");//?????
	p = 0;
	while (z!=NULL) 
	{
		x[++p]=atoi(z);//????????????????
		z=strtok(NULL,",");//???????,?????????????
	}
	z = strtok(b,",");
	p = 0;
	while (z!=NULL)
	{
		y[++p]=atoi(z);
		z=strtok(NULL,",");
	}
	memset(c,0,sizeof(c));
	for (i=1;i<=p;i++)
		for (j=x[i];j<y[i];j++)
		{
			c[j]++;
		}
	int max=0;
	for(int g=1;g<=10000;g++) 
	{
		if(c[g]>max)  max=c[g];
	}
	cout<<p<<" "<<max<<endl;
	return 0;
}




