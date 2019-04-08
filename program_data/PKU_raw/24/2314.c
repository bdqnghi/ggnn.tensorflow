


int main()
{
	int maxnum=0,minnum=99,i,flag=0;
	char max[50],min[50],temp[50],t;
	while(1)
	{
		do
		{
			t=cin.get();
		}while(t==' '||t==',');
		for(i=0;t!=' '&&t!=',';)
		{
			temp[i]=t;
			t=cin.get();
			i++;
			if(t=='\n')
			{
				flag=1;
				break;
			}
		}
		temp[i]='\0';
		if(i>maxnum)
		{
			strcpy(max,temp);
			maxnum=i;
		}
		if(i<minnum)
		{
			strcpy(min,temp);
			minnum=i;
		}
		if(flag==1)
			break;
	}
end:
	cout<<max<<endl;
	cout<<min<<endl;

	return 0;
}