int main()
{
	int i=0,j=0,k=0,q=0;int p=0;
	char name[6]={0};
	for(i=1;i<6;i++)
	{
		for(j=1;j<6;j++)
		{
			if(j==i)continue;
			for(k=1;k<6;k++)
			{
				if((k==i)||(k==j))continue;
				for(q=1;q<6;q++)
				{
					if((q==i)||(q==j)||(q==k))continue;
					if((i+j==k+q)&&(i+q>k+j)&&(i+k<j))
					{
						name[i]='z'; name[j]='q'; name[k]='s'; name[q]='l';
						for(p=5;p>0;p--)
						{
							if(name[p]!=0)
							{
								cout<<name[p]<<" "<<p*10<<endl;
							}
						}
					}
				}
			}
		}
	}
    return 0;
}