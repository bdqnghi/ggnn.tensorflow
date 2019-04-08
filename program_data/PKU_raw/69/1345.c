

char s1[1000];
char s2[1000];
int a[1000];
int b[1000];
int c[1000];
int m ,n;
void cal()
{
	int i,j;
	int len;
	if(m>n)
	    len =m;
 	else
 	    len =n;
 	int   k=0;
 	int s = 0;
	for(i=0;i<len;i++)
	{
	
		s = (a[i]+b[i]+k)%10;
		k = (a[i]+b[i]+k)/10;
		c[i] = s;
	}
	c[i] =k;

}
int main()
{
	cin>>s1;
	cin>>s2;
	m = strlen(s1);
	n = strlen(s2);
	int i,j=0;;
	for(i=m-1;i>=0;i--)
		a[j++] = s1[i]-'0';
	j=0;
	for(i=n-1;i>=0;i--)
		b[j++] = s2[i]-'0';
	cal();
	for(i=999;i>0;i--)
	    if(c[i]!=0)
	        break;
	for(;i>=0;i--)
	    cout<<c[i];
 	cout<<endl;
    return 0;
}
