int main()
{
	char str[201],ch[201],ch1[201],str1[201];
	int s,s1,s2,i,j,g=0,k;
	cin.getline(str,201);
	cin.getline(ch,201);
	cin.getline(ch1,201);
	s=strlen(str);
	s1=strlen(ch);
	s2=strlen(ch1);
	strcpy(str1,str);
	for(i=0;i<s;i++)
	{
		g=0;
		if(str[i]==ch[0]&&((i==0)||(str[i-1]==' ')))
		{
			for(j=i;j<s1+i;j++)
			{
				if(str[j]==ch[j-i])
					g++;
			}
			if(g==s1&&(str[s1+i]==' '||str[s1+i]=='\0'))
			{
				for(k=0;k<i;k++)
				{
					str1[k]=str[k];
					
				}
				for(k=i;k<i+s2;k++)
				{
					str1[k]=ch1[k-i];
				}
				for(k=i+s2;k<=s+s2-s1;k++)
				{
					str1[k]=str[k+s1-s2];
				}
				for(k=0;k<=s+s2-s1;k++)
					str[k]=str1[k];
				s=s+s2-s1;
			}
		}
		
	}
	cout<<str1<<endl;

return 0;
}

