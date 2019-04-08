int main()
{
int n;
cin>>n;
for(int k=1;k<=n;k++)
{
	int row,col,count=0,i,j;
	cin>>row>>col;
	int str[101][101];
	for(i=1;i<=row;i++)
	  for(j=1;j<=col;j++)
	     {
		 cin>>*(*(str+i)+j);                                                  //???? 
		 }
	for(i=1;i<=col;i++)
	   count=count+*(*(str+1)+i);
	for(i=2;i<=row;i++)
	   count=count+*(*(str+i)+col);                                          //???????count 
	for(i=col-1;i>=1;i--)
	   count=count+*(*(str+row)+i);
	for(i=row-1;i>=2;i--)
	   count=count+*(*(str+i)+1);
	cout<<count<<endl;                                                      //?? 
}
return 0;
}