
int main()
{
    int i,j,k,l,l1,l2;	
	char s[200],a[101],b[101];
	cin.getline(s,200);
	cin.getline(a,101);
	cin.getline(b,101);
    l=strlen(s);
	l1=strlen(a);
	l2=strlen(b);
	for(i=l;i>=0;i--)
		s[i+1]=s[i];
	s[0]=' ';
	l+=1;
	for(i=0;i<=l+1;i++)
	{
		if(s[i]==' ')
		{
			for(j=i+1;j<=i+l1;j++)
			{
				if(s[j]!=a[j-i-1]) break;
		        else
				{
		           if(j==i+l1&&(s[i+l1+1]==' '||s[i+l1+1]=='\0'))
				   {
					   if(l2>=l1)
					   {
						   l+=l2-l1;
						   for(k=l-l2+l1;k>=i+l1+1;k--)
							   s[k+l2-l1]=s[k];
						   for(k=i;k<=i+l2-1;k++)
							   s[k+1]=b[k-i];
					   }
					   if(l2<l1)
					   {
						   for(k=i+l1+1;k<=l+2;k++)
							   s[k+l2-l1]=s[k];
						   for(k=i;k<=i+l2-1;k++)
						       s[k+1]=b[k-i];
					   }
				   }
				}
			}
		}
	}
	for(i=1;i<=l;i++)
		s[i-1]=s[i];
	cout<<s<<endl;
	return 0;
}
		
	


	



	