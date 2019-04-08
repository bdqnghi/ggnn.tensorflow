
int main()
{
	int flag,i,n;
	char a[501],*j,*l,*r;
	cin>>a;n=strlen(a);
	for(i=1;i<n;i++)
	{
		for(j=a;*(j+i);j++)
		{
			flag=1;
			for(l=j,r=j+i;l<r;l++,r--)
				if(*l!=*r){flag=0;break;}
			if(flag)
			{
				for(l=j;l<=j+i;l++)cout<<*l;
				cout<<endl;
			}
		}
	}
	return 0;
}