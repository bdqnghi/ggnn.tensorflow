int panduan(int x1,int x2,int x3,int x4,int x5)
{
	if (x1!=x2&&x1!=x3&&x1!=x4&&x1!=x5&&x2!=x3&&x2!=x4&&x2!=x5&&x3!=x4&&x3!=x5&&x4!=x5)
		return 1;
	else
		return 2;
}//???????????
int main()
{
	int a,b,c,d,e,word[10];//?????????????
	int flag=0;//??
	for (a=1;a<=5;a++)
	{
		for (b=1;b<=5;b++)
		{
			for (c=1;c<=5;c++)
			{
				for (d=1;d<=5;d++)
				{
					for (e=1;e<=5;e++)
					{
						if (e==2||e==3)
							continue;
						else
						word[a]=(e==1);
						word[b]=(b==2);
						word[c]=(a==5);
						word[d]=(c!=1);
						word[e]=(d==1);
						if (word[1]==1&&word[2]==1&&word[3]==0&&word[4]==0&&word[5]==0&&panduan(a,b,c,d,e)==1)
						{
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
							flag=1;
						}
						if (flag==1)
							break;//?????
					}
					if (flag==1)
						break;
				}
				if (flag==1)
					break;
			}
			if (flag==1)
				break;
		}
		if (flag==1)
			break;
	}
	return 0;
}
