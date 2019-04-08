int shuzu1[10]={0},shuzu2[10]={0};
int n1,n2;
void input()//??
{
	int i;
	cin>>n1>>n2;
	for (i=0;i<n1;i++)cin>>shuzu1[i];
	for (i=0;i<n2;i++)cin>>shuzu2[i];
}

void sort(int shuzu[],int bg,int ed)//???????????
{
	int bg1=bg,ed1=ed,key=shuzu[bg];
	if (bg1!=ed1) 
	{
		while(bg1!=ed1)
		{
			for (;shuzu[ed1]>=key&&bg1!=ed1;ed1--) ;
			shuzu[bg1]=shuzu[ed1];
			if(bg1==ed1) break;
			bg1++;
			for (;shuzu[bg1]<=key&&bg1!=ed1;bg1++) ;
			shuzu[ed1]=shuzu[bg1];
			if(bg1==ed1) break;
			ed1--;
		}
		shuzu[bg1]=key;
		if(bg1!=bg) sort (shuzu,bg,bg1-1);
		if(ed1!=ed) sort (shuzu,ed1+1,ed);
	}
}
void sort1()//????
{
	sort(shuzu1,0,n1-1);//?2???????
	sort(shuzu2,0,n2-1);
}
void link()
{
	int lk;//??2??
	for (lk=0;lk<n2;lk++) shuzu1[n1+lk]=shuzu2[lk];
}
void output()//????
{
	int i;
	for (i=0;i<n1+n2;i++)
	{
		if(i) cout<<' ';//???????????
		cout<<shuzu1[i];
	}
}
int main()
{
	input();
	sort1();
	link();
	output();
	return 0;
}

