

char CHR[120];
int p1,p2,p3,num;

int deal(char Q)
{
	if ((Q>='0')&&(Q<='9')) return Q-'0';
	if ((Q>='A')&&(Q<='Z')) return Q-'A'+10;
	return -1;
}
char laed(int Q)
{
	if ((Q>=0)&&(Q<=9)) return '0'+Q;
	if (Q>9) return 'A'+Q-10;
}
void output(int ans)
{
	if (ans==0) return;
	else 
	{
		output(ans/p3);
		cout<<laed(ans%p3);
	}
}
int main()
{
	cin>>p1;cin.get();
	p2=0;num=0;
	while ((CHR[p2]=cin.get())!=' ') 
	{
		if ((CHR[p2]>='a')&&(CHR[p2]<='z')) CHR[p2]=CHR[p2]-'a'+'A';
		num=num*p1+deal(CHR[p2]);
		p2++;
	}
	cin>>p3;
	if (num==0) cout<<0;
	else output(num);
	cout<<endl;
	return 0;
}

