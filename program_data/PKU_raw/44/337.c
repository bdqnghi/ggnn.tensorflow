int main()
{
	int n,i,j,r,p=0,y,r1,t=0;
	char q[6][100];
	char ch[100]={0},ch1[100]={0};
	for(i=0;i<=5;i++)
	{
		gets(q[i]);
		r=strlen(q[i]);
		if(q[i][0]>=48&&q[i][0]<=57)
		{
			for(j=0;j<=r-1;j++)
			{
				ch[r-1-j]=q[i][j];
			}
		}
		if(q[i][0]=='-'&&q[i][1]!='0')
		{
			for(j=1;j<=r-1;j++)
			{
				ch[r-j]=q[i][j];
			}
			ch[0]=q[i][0];
		}
		if(q[i][0]=='-'&&q[i][1]=='0') 
		{ch[0]=q[i][1];}
		r1=strlen(ch);
		if(ch[0]=='0'&&r1==1) {ch1[0]=ch[0];}
		else
		{
			if(ch[0]=='-')
			{
				for(y=1;y<=r1-1;y++)
				{
					if(ch[1]!='0') {break;}
					if(ch[y]=='0') {p++;}
					if(ch[y+1]!='0') {break;}
				}
				for(int y1=p+1;y1<=r1-1;y1++)
				{
					ch1[0]=ch[0]; ch1[t+1]=ch[y1]; t++;
				}
			}
			else
			{
				for(int x=0;x<=r1-1;x++)
				{
					if(ch[x]!='0') {break;}
					if(ch[x]=='0') {p++;}
					if(ch[x+1]!='0') {break;}
				}
				for(int x1=p;x1<=r1-1;x1++)
				{
					ch1[t]=ch[x1]; t++;
				}
			}
		}
		puts(ch1);
	    p=0;
		t=0;
	for(int x=0;x<=99;x++)
	{
		ch[x]='\0'; 
		ch1[x]='\0';
	}
	}
	return 0;
}