void fuck(int n);
int main()
{
	char c,boy;
	int a[100],i=0,j;
	boy=cin.get();
	a[0]=1;
	while((c=cin.get())!='\n')
	{
		i++;
		if(c==boy) a[i]=1;
		else {
			a[i]=-1;
			j=i-1;
			while(a[j]!=1) j--;
			cout<<j<<" "<<i<<endl;
			a[j]=0;}
	}
	return 0;
}
