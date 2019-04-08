
int main() {
	int n;
	cin>>n;
	int a[n];
	int num=0;
	int c=1;
	int j,i;
	int b[100];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)


	{  for(j=0;j<i;j++)
		 {if (a[i]==a[j])
			 c=0;}

		 if(c!=0)
		 {
			 num=num+1;
	        b[num]=a[i];

	      }
		 c=1;
	}

	for(i=1;i<num;i++)
	{
      cout<<b[i]<<" ";

	}
	cout<<b[num];









	return 0;
}
