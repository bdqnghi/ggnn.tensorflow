
void sort(int a,int b,int c,int d)
{
	int result[4]={a,b,c,d};
	char name[4]={'z','q','s','l'};
	int temp;
	char tempname;
	for(int i=0;i<4;i++)
	{
		for(int j=i;j<4;j++)
		{
			if(result[i]<result[j])
			{
				temp=result[i];
				result[i]=result[j];
				result[j]=temp;
				
				tempname=name[i];
				name[i]=name[j];
				name[j]=tempname;			
			}
		}
	}
	
	for(int i=0;i<4;i++)
	{
		cout<<name[i]<<" "<<result[i]*10<<endl;
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
						sort(z,q,s,l);
					}
				}
			}
		}
	}
		return 0;
}
