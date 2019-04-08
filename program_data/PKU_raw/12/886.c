int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b; 
	
}
int chuli(int * p,int i)
{
	
	int count=0;
	
	for(int q=0;q<i;q++)
	{	
		if(2*(p[q])>p[i-1])return count;
	
		for(int j=q;j<i;j++)
		{
			
			if(p[j]==2*(p[q])){count++; break;}
			if(p[j]>2*(p[q])){break;}
		}
	}
	
	return count;
}
int main()
{
	//freopen("in.txt","r",stdin);
	int a[20];
	int num;
	while(cin>>a[0]&&(a[0]!=-1))
	{
		int i=1;
		while(cin>>a[i]&&a[i])
		{
			i++;
		}
		
		
		qsort(a,i,sizeof(int),cmp);
	
		num=chuli(a,i);
		cout<<num<<endl;
	}
	return 0;
}