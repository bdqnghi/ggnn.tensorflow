/*?????*/ 



int main()
{
	int n,i;
	char s1[101],s2[101];
	int result[101];
	cin>>n;
	int n1,n2,hand,j;
	while(n--)
	{
		cin>>s1>>s2;
		n1=strlen(s1);
		n2=strlen(s2);
		hand=0;
		for(i=n2-1;i>=0;i--)
		{
			result[hand]=s1[n1-n2+i]-s2[i];//???
			if(result[hand]<0)
			{
				result[hand]=result[hand]+10;
				j=n1-n2+i-1;
				while(--s1[j]<48)//??
				{
					s1[j]=s1[j]+10;
					j--;
				}
			}
			hand++;
		}
		for(i=0;i<n1-n2;i++)
		    if(s1[i]!='0') break;
		for(;i<n1-n2;i++) cout<<(int)s1[i]-48;
		for(i=hand-1;i>=0;i--) cout<<result[i];
		cout<<endl;
	}
	return 0;
}