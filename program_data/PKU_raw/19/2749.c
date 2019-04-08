int main()
{
	char a[100],b[100],c[100];
	int q,w,e,i,j,s,shu,n,z;
	cin.getline(a,99);
	cin.getline(b,99);
	cin.getline(c,99);
	q=strlen(a);
	w=strlen(b);
	e=strlen(c);
	for(i=0;a[i]!='\0';i++)
	{
		shu=1;s=i;
		for(j=0;j<w;j++)
		{
			if(a[s]!=b[j]){shu=0;break;}
			s++;
		}
		if(i==0)
		{
			if(a[s]!=' ')shu=0;
		}else
		{
			if((a[i-1]!=' ')||((a[s]!=' ')&&(a[s]!='\0')))shu=0;
		
		}
		if(shu==0)continue;
		if(shu==1)
		{
			if(w>=e)
			{
			for(s=e+i;a[s]!='\0';s++)
			{
				a[s]=a[s+w-e];
			}
			}else
			{for(z=0;a[z]!='\0';z++);
			
				for(s=z;s>=w+i;s--)
			{
				a[s-w+e]=a[s];
			}

			}
			j=0;
			for(s=i;s<i+e;s++)
			{
				a[s]=c[j];
				j++;
			}
			
		}
	}
	cout<<a;
	cin>>n;
	return 0;
}
