char a[6];
int i,j;
void replace(int i,int j)
{
	int temp;
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		replace(i+1,j-1);
	}
	else return;
}
void main()
{
	gets(a);
	replace(0,strlen(a)-1);
	puts(a);
}