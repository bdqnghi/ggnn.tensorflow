/************************/
/*     ??????     */
/*    ??? pyyaoer    */
/*   ??  2011.12.4    */
/************************/
int main()
{
	int c[1000],n,m;
	int *p=NULL;
	cin>>n>>m;
	p=c;
	for (;p<=c+n-1;p++)         //?????
		cin>>*p;
	for (p=c+n-1;p>=c;p--)      //???????m?
		*(p+m)=*p;
	for (p=c;p<=c+m-1;p++)      //?m???????n?
		*p=*(p+n);
	p=c+1;
	cout<<*c;
	while (p<=c+n-1)            //????
		cout<<" "<<*p++;
	cout<<endl;
	return 0;
}