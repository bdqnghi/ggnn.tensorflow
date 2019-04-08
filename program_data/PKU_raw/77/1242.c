int main()
{
	char str[110];
	int a[50][2];
	char s;
	int L,i,j,k=0;
	int p=0,t,q,m=0;
	cin.get(str,110,'\n');//??
	L=strlen(str);//???????
	s=str[0];
while(m!=L)
{
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==s)
		{
			for( j=i+1;j<L;j++)
			{
				if(str[j]=='a')
					continue;
				else if(str[j]==s)
					break;
				else
				{
					a[p][0]=i;
					a[p][1]=j;
					str[i]='a';
					str[j]='a';
					p++;
					break;
				}
			}
		}
	}//????
m=0;
for(q=0;str[q]!='\0';q++)
		if(str[q]=='a')
			m++;
}

		
		for( i=0;i<L/2-1;i++)
			for( j=i+1;j<L/2;j++)//??
			 if(a[i][1]>a[j][1])
			 {
				 t=a[i][1];
				 a[i][1]=a[j][1];
				 a[j][1]=t;
				 t=a[i][0];
				 a[i][0]=a[j][0];
				 a[j][0]=t;
			 }
		for( i=0;i<L/2;i++)
			cout<<a[i][0]<<" "<<a[i][1]<<endl;//??
		return 0;
}
