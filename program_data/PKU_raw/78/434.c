
void doublesort(int a,int b,int c,int d)
{
	int result[4]={a,b,c,d};
	char name[4]={'z','q','s','l'};
	
	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(result[i]<result[j])
			{
				swap(result[i],result[j]);
				swap(name[i],name[j]);	
			}
		}
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<name[i]<<" "<<10*result[i]<<endl;
	}
} 

int main()
{
	int z,q,s,l;
	for(z=1;z<=5;z++)
	{
		for(q=1;q<=5;q++)
		{
			for(s=1;s<=5;s++)
			{
				for(l=1;l<=5;l++)
				{	
					if(z+q==s+l&&z+l>s+q&&z+s<q&&z!=q!=s!=l)
					{
						doublesort(z,q,s,l);
					}
				}
			}
		}
	}
	return 0;
}