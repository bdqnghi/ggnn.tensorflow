int main()
{
	char a[100],b[100],c;
	int i=0,j=0,k=0;
	while(cin.get(c)&&c!='\n')
		a[i++]=c;//???????
	for(j=0;j<i;j++)
	{
		if(a[j]==32&&a[j+1]==32)
			continue;//?????????,??
		else 
			b[k++]=a[j];//??????b[100]?
	}
	for(int n=0;n<k;n++)
		cout<<b[n];//????
	return 0;
}