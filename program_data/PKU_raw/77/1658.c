int boy=0,children[100][2];
int childnum=0;
int theboy;
void findpair(char boysign)
{
	if(boy==-1)
		return;
	char sign;
	cin>>sign;
	if(sign==boysign)
	{
		boy++;
		childnum++;
		children[childnum][0]=0;
		findpair(boysign);
		return;
	}
	else
	{
		childnum++;
		children[childnum][0]=1;
		for(int i=childnum; ;i--)
			if(children[i][0]==0&&children[i][1])
			{
				theboy=i;
				children[i][1]=0;
				break;
			}
		cout<<theboy<<' '<<childnum<<endl;
		boy--;
		findpair(boysign);
		return;
	}
}
int main()
{
	for(int i=0;i<100;i++)
	    children[i][1]=1;
	char boysign;
	cin>>boysign;
	findpair(boysign);
	return 0;
}