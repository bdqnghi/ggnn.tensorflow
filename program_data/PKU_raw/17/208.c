int main()
{
	char line[101];
	int left[100]={0},right[100]={0}; //left?right???????????????
	while(cin>>line)
	{
		int i,k1=0,k2=0;
		for (i=0;i<strlen(line);i++)
		{
			if (line[i]=='(')
			{
				left[k1]=i;
				k1++;
			}        //????????
			if (line[i]==')')
			{
				if (k1!=0)
				{
					left[k1-1]=0;
					k1--;
				}    //????????????????????
				else
				{
					right[k2]=i;
					k2++;
				}
			}
		}
		char ans[101];
		for (i=0;i<strlen(line);i++)
			ans[i]=' ';
		ans[strlen(line)]='\0';   //?????????????????
		for (i=0;i<k1;i++)
		{
			ans[left[i]]='$';
		}
		for (i=0;i<k2;i++)
		{
			ans[right[i]]='?';
		}                         //??????????
		cout <<line<<endl;
		cout <<ans<<endl;         //??
	}
	return 0;
}