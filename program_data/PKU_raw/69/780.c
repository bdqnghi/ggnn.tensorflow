int main()
{
	char s1[252], s2[252];
  int a[252],b[252],c[252];
 
  memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
	memset(c,0,252);
	cin.getline(s1,251);
  cin.getline(s2,251);
	
 int len1=strlen(s1),len2=strlen(s2);
 if((strcmp(s1,"0")==0&&strcmp(s2,"0")==0))
 { cout<<'0'<<endl;  return 0;}
 else
 {
 int i=0,j=0;
 for  (i = 0; i <len1; ++i) a[i]=s1[i]-'0';
 for (i=0;i<len2;++i) b[i]=s2[i]-'0';
 for( i=0;i<len1/2;i++)
{
	int temp;
	temp=a[i];
	a[i]=a[len1-1-i];
	a[len1-1-i]=temp;
}

  for( j=0;j<len2/2;j++)
{
	int temp;
	temp=b[j];
	b[j]=b[len2-1-j];
	b[len2-1-j]=temp;
}
 for(i=0;i<252;i++)
 {
	 a[i]+=b[i];
	 if(a[i]>=10)
	 {
	   a[i]-=10;a[i+1]++;
	 }
	 
 }
	i=251;
	 while(a[i]==0) i--;
	 for(;i>=0;i--) 
		 cout<<(char)(a[i]+'0');
	 cout<<endl;
 }
	 return 0;
 }