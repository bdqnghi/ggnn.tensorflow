int flag[101]={0};
char str[101],boy,girl,num=0;
void match(int i)
{
	flag[i]=1;
	for(int k=i;;k--)
		{
			if(str[k]==boy&&flag[k]==0)
			{
			   cout<<k<<' '<<i<<endl;
			   flag[k]=1;
			   break;
			}
		}
	num=num+2;
	if(num==strlen(str))return;
		for(++i;;i++)
		{
			if(str[i]==girl)
				{
					match(i);
					break;
			}

		}
	return;
}
		

int main()
{
	cin>>str;
	boy=str[0];
	int i;
	char *p=str;
	for(i=0;;p++,i++)                //i--first girl
	{
		if(*p!=boy)
			{
				girl=*p;
		        break;
		    }
	}
	match(i);
	return 0;
}
	

