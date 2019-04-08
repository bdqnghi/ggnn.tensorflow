
int main()
{
	char a[252],b[252],temp;
	int i,j,m,n,i1,j1,w;
	int k;

	scanf("%s",a);
	scanf("%s",b);

	for(i1=0,i=0;a[i1]!='\0';i1++)
		i++;

	for(j=0,j1=0;b[j1]!='\0';j1++)
		j++;

	for(m=0,n=i-1;m<n;m++,n--)
	{	
		temp=a[m];
        a[m]=a[n];
		a[n]=temp;
	}

	for(m=0,n=j-1;m<n;m++,n--)
		{	
			temp=b[m];
			b[m]=b[n];
			b[n]=temp;
		}

	for(m=i;m<251;m++)
	{
		a[m]='0';
	}
	for(n=j;n<251;n++)
	{
		b[n]='0';
	}

	w=0;
	for(n=0;n<250;n++)
	{
		int x,y,z;
		x=a[n]-'0';
		y=b[n]-'0';
		x=x+y+w;
		z=x%10;
		w=x/10;
		a[n]='0'+z;
	}
	a[n]='0' + w;

	for(n=250,k=1;n>=0&&k!=0;n--)
	{
		if(a[n]!='0')
		{	
			k=0;
		}
	}
	n++;
	for(;n>=0;n--)
	{
		printf("%c",a[n]);
	}

	return 0;
}