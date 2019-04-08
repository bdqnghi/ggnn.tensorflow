

int main()
{
	char all[257],sub[257],re[257];
	int i,j,k,p,q,r,s;
	
	cin>>all>>sub>>re;
	
	int flag;
	for(i=0;all[i]!='\0';i++)
	{
		flag=1;
		for(j=0,k=i;sub[j]!='\0';k++,j++)
		{
			if(all[k]!=sub[j])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==1)
	{
		int c=strlen(re);

		for(p=k,q=c;all[p]!='\0';p++,q++)
			re[q]=all[p];
		re[q]='\0';

		for(r=0,s=i;re[r]!='\0';r++,s++)
			all[s]=re[r];
		all[s]='\0';
	}
	cout<<all<<endl;

	return 0;
}

