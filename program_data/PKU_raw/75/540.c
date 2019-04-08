int main()
{
	char str1[10000],str2[10000],temp[5];
	int le1,le2,k=0,i,m,a[10000],b[10000],c[10000]={0},j,max;
	cin>>str1;
	cin>>str2;
	le1=strlen(str1);
	le2=strlen(str2);
	for(i=0;i<=le1-1;i++)
	{
		if((str1[i-1]==','&&i-1>=0)||(i==0))
		{
		   for(j=0;j<=4;j++)
		   {
			   if(str1[j+i]!=',')
				   temp[j]=str1[j+i];
			   if(str1[j+i]==',')
				   break;
		   }
		   temp[j]='\0';
		   a[k]=temp[0]-'0';
		   for(m=1;m<strlen(temp);m++)
			   a[k]=10*a[k]+temp[m]-'0';
		   k++;
		}
	}
	k=0;
	for(i=0;i<=le2-1;i++)
	{
		if((str2[i-1]==','&&i-1>=0)||(i==0))
		{
			for(j=0;j<=4;j++)
			{
				if(str2[j+i]!=',')
					temp[j]=str2[j+i];
				if(str2[j+i]==',')
					break;
			}
			temp[j]='\0';
			b[k]=temp[0]-'0';
			for(m=1;m<strlen(temp);m++)
				b[k]=10*b[k]+temp[m]-'0';
			k++;
		}
	}
	cout<<k<<" ";
	for(i=0;i<=1000;i++)
	   for(j=0;j<=k-1;j++)
	   {
		   if(a[j]<=i&&i<b[j])
			   c[i]++;
	   }
	max=c[0];
	for(i=0;i<=1000;i++)
		if(max<c[i])
			max=c[i];
	cout<<max;
	return 0;
}


