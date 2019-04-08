//**************************************
//* ????????C????????  *
//* ?????                         *
//**************************************
int main()
{
	int n,i=0,j=0,count=0,first=1;
	char c[100][82]={0};
		cin>>n;
		cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(c[i],82);
	}
		for(i=0;i<n;i++,first=1,count=0,j=0)
		{
		while(c[i][j]!=0)                                           //????'\0'??
		{
			if(first)                                               //?????????
			{
				if((c[i][j]>=65&&c[i][j]<=90)||(c[i][j]>=97&&c[i][j]<=122)||(c[i][j]==95))
				{
					count++;                                        //count?????????????
					first=0;
					j++;                                            //j??????????
				}
				else {
					   j++;
					break;}

			}
			else                                                     //???????????
			{
				if((c[i][j]>=65&&c[i][j]<=90)||(c[i][j]>=97&&c[i][j]<=122)||(c[i][j]==95)||(c[i][j]>=48&&c[i][j]<=57))
				{
					count++;
					j++;
				}
				else
				{
					j++;
					break;
				}
			}
		}
						if(count==j)                                  //??????????????????
							cout<<1<<endl;
						else 
							cout<<0<<endl;
			}
	return 0;
}