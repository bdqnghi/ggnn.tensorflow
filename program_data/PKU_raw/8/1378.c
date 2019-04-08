int m,n,a[500],b[200],temp;
void read(void)                                    //??
{
	cin>>m>>n;
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
}

void rank(void)                                    //??
{
	for(int i=0;i<m-1;i++)
		for(int j=0;j<m-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	for(int i=0;i<n-1;i++)
			for(int j=0;j<n-i-1;j++)
			{
				if(b[j]>b[j+1])
				{
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
}

void merge(void)                                //??
{
	for(int i=0;i<n;i++) a[m+i]=b[i];
}

void show(void)                                      //??
{
	for(int i=0;i<m+n-1;i++) cout<<a[i]<<' ';
	cout<<a[m+n-1];
}

int main(void)
{
      read();
      rank();
      merge();
      show();
      return 0;
}
