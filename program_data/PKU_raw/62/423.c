int main()
{
	char str[100],p=1,i;
	cin.get(str,100);
		for(i=0;str[i]!='\0';i++)//??????
		{
			if(str[i]!=' ')
			{
				if(p==0)//?????????????
				{
					cout<<" "<<str[i];//??????????
					p=1;
				}
				else
					cout<<str[i];
			}
			else
			{
				p=0;
			}
		}
		return 0;
}