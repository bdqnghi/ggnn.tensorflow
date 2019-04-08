
int main()
{
	char a[100],b[100],c[200];
	int len,len1,len2,i,j,temp,judge=0;
	cin.getline(c,200);
	len=strlen(c);
	len1=(len-1)/2;
	len2=len1;
	for(i=0;i<len1;i++)
		a[i]=c[i];
	for(i=0;i<len2;i++)
		b[i]=c[len-1-i];
	for(i=0;i<len1-1;i++)
		for(j=0;j<len1-1-i;j++)
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(i=0;i<len1-1;i++)
			for(j=0;j<len1-1-i;j++)
				if(b[j]<b[j+1])
				{
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
	for(i=0;i<len1;i++)
		if(a[i]!=b[i]){
			judge++;
	}
	if(judge==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}