int main()
{
	char a[100],t;
	int b[100];
    cin.getline(a,100,'\n');
	int i,j,k,l,w=1;
	b[0]=0;
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]!=32&&a[i-1]==32)
		{
            b[w]=i;
			w++;
		}
	}
	b[w]=i+1;
	for(k=0;k<w;k++)
	{
		for(l=b[k];l<(b[k+1]+b[k]-1)/2;l++)
		{
			t=a[l];
			a[l]=a[b[k+1]+b[k]-2-l];
			a[b[k+1]+b[k]-2-l]=t;
		}
	}
    
	for(j=0;j<i/2;j++)
	{
		t=a[j];
		a[j]=a[i-1-j];
		a[i-1-j]=t;
	}
	cout<<a<<endl;
	return 0;
}