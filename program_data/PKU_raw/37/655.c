/**
* @file homework.cpp
* @author ???
* @date 2011-11-3
* @description
* ??????: ????????????
*/
int main()
{
	int t, i, j, k, num, flag=1;
	char ch;
	cin>>t;
	for (i=0;i<t;i++)
	{
		char a[100001];
		cin>>a;
		for (j=0;a[j]!='\0';j++)
		{	
			if (a[j]==flag) continue;
			num=1;
			ch=a[j];
			for (k=j+1;a[k]!='\0';k++)
			{
				if (a[k]==flag) continue;
				if (a[k]==ch) 
				{
					num++;
					a[k]=flag;
				}
			}
			if (num==1) break;
		}
		if (num==1) cout<<ch<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}