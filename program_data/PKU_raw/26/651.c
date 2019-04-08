int main()
{
	char a[100],b[100];
	cin.getline(a,100);
	int i,k=0,n;
	n=strlen(a);
	for(i=0;i<=n;i++){
	  if((int)a[i]-32==0&&(int)a[i+1]-32==0)continue;
	  b[k]=a[i];
	  k++;
	}
	cout<<b<<endl;
	return 0;
}
