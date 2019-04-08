int main()
{ char c;
int i,j;
int x;
char a[101]={0};
int b[101]={0};
int m=0;



cin.getline(a,101);
for(i=0;i<101;i++)
{
	if((a[i]!='\0')&&(a[i+1]=='\0'))
		x=i;
}
for(i=0;i<=x;i++)
{
	if(a[i]==' ')
	{
		b[m]=i;
		m++;
	}
}
b[m]=x+1;
for(i=m;i>0;i--)
	for(j=0;j<=100;j++)
	{
		if((j>b[i-1])&&(j<b[i]))
		{
			cout<<a[j];
			if(j==b[i]-1)
				cout<<" ";
		}



	}
	for(j=0;j<=100;j++)
	{
		if(j<b[0])
			cout<<a[j];
	}


	return 0;


}

















