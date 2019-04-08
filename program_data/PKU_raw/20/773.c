int main()
{
    char str[14],substr[4],a[11];
	int i,j,k,l,len,p;
    while(cin.get(str,11,' '))
	{
		p=0;
	    k=0;
		len=strlen(str);
		cin.get();
		cin.getline(substr,4);
		for(i=0;i<len-1;i++)
			for(j=i+1;j<len;j++)
				if(str[i]>str[j])
				  if(str[i]>str[p])
					  p=i;
        for(j=p+1;j<len;j++)
			a[k++]=str[j];
		a[k]='\0';
		k=0;
		str[p+1]=substr[0];
		str[p+2]=substr[1];
		str[p+3]=substr[2];
		for(i=p+4;i<len+3;i++)
			str[i]=a[k++];
		str[i]='\0';
		cout<<str;
		cout<<endl;
	}
	return 0;
}