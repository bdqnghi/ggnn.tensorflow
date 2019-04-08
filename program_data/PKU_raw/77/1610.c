
void main()
{
	int i,j,k,n,m,len,r;
	char s[1000]={""},a,b;
	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		a=s[0];
		if(s[i]!=a) {b=s[i];break;}
	}
 for(r=0;r<len/2+1;r++)
 {
	for(i=0;i<len;i++)
	{
		if(s[i]==a)
		{
			for(j=i+1,k=0;j<len;j++)
			{
		   	 if(s[j]==' ') continue;
			 else if(s[j]==b) {s[i]=' ';s[j]=' '; printf("%d %d\n",i,j);k++;break;}
			 else break;
			}
				if(k==1)break;
		}
	

	}
 }


}