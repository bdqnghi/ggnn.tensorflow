//??????
int main()
{
	int a=0,b=0,c=0,as=0,bs=0,cs=0,i=0;//????
	char rank[10];
	for(a=0;a<3;a++)//??????
		for(b=0;b<3;b++)
			for(c=0;c<3;c++)
			{
				if((a!=b)&&(a!=c)&&(b!=c))//????????
				{					
					as=(a<b)+(a==c);//????????????
					bs=(a>b)+(a>c);
					cs=(c>b)+(b>a);				
					if((as!=bs)&&(as!=cs)&&(bs!=cs)&&(a+as==2)&&(b+bs==2)&&(c+cs==2))
					{					
						rank[as]='A';//?????????
						rank[bs]='B';
						rank[cs]='C';
						for(i=2;i>=0;i--)//??????
							cout<<rank[i];
					}
				}
			}
			cout<<endl;
	return 0;
}