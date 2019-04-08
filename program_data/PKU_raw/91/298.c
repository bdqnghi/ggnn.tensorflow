int main()
{
    char a[202],*p=a;
    cin.getline(p,202);
    while(*(p+1)!='\0')
    {
    	cout<<(char)((int)*p+(int)*(p+1));
    	p++;
    }
    cout<<(char)((int)*p+(int)a[0]);
	return 0;
}









