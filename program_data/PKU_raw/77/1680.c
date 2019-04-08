void couple(char a[],int b[],char x,char y)
{
	int i,j,z=0;
	for(i=0;a[i]!='\0';i++)
		if(b[i]==0)
		{
			z=1;
			break;
		}
	if(z==1)
		for(i=0;a[i]!='\0';i++)
			if(a[i]==y&&b[i]==0)
				for(j=0;j<i;j++)
					if(a[i-1-j]==x&&b[i-1-j]==0)
					{
						cout<<i-1-j<<" "<<i<<endl;
						b[i]=b[i-1-j]=1;
						couple(a,b,x,y);
					}
}
int main()
{
	int i,b[101];
	char a[101],x,y;
	cin>>a;
	x=a[0];
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=0;
		if(a[i]!=x)
		{
			y=a[i];
		}
	}
	couple(a,b,x,y);
	return 0;
}