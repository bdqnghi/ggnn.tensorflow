int main()
{  
	int i,j,s,k,l,m,n,v=0;
	char a[202],b[102],c[102];
    cin.getline(a,202);
	cin.getline(b,102);
	cin.getline(c,102);
	l=strlen(c);
	m=strlen(a);
	n=strlen(b);
	for(j=0;j<m;)
	{
		k=0;
		if((j==0)||((j>0)&&(a[j-1]==' ')))
	    {
			for(i=j;i<j+n;i++)
			if(a[i]==b[i-j])
			k++; 
			if((k==n)&&(a[j+n]!=' ')&&(a[j+n]!='\0'))
				k=0;
		}                             //???????????????
		
		if   (k==n)
		{
			if(l>n)
				for(s=0;s<l-n;s++)
				for(i=m+s;i>=j+n+s;i--)
					a[i+1]=a[i];     //???????????????l-n??
			if(l<n)
			{
				for(s=0;s<n-l;s++)
				for(i=j+n-s-1;i<m-s;i++)
					a[i]=a[i+1];
				for(i=m+l-n;i<m;i++)
					a[i]='\0';
			}
			for(i=j;i<j+l;i++)
			a[i]=c[i-j];  
			j+=l;                  //??????
			m=m+l-n;
		}	
		else j++;
	}
	for(i=0;i<m;i++)
cout<<a[i];
	cout<<endl;
return 0;
}