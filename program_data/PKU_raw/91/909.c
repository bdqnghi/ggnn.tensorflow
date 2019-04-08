int main()
{
	char a[100],b[100],*m=NULL,*n=NULL;
	int i=0;
	while((a[i]=cin.get())!='\n')
		i++;
	for(m=a,n=b;m<=a+i-2,n<=b+i-2;n++,m++)
		*n=*m+*(m+1);
	*n=*m+*(m-i+1);
	for(n=b;n<b+i;n++)
		cout<<*n;
	cout<<endl;
	return 0;
}
