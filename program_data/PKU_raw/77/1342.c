int lefts(char *,char *);
char boy,girl;
int main()
{
	char children[105]={'\0'};
	int i,left,right,sum;
	cin>>children;
	sum=strlen(children);
	boy=children[0];
	girl=children[sum-1];
	for(i=0;i<sum;i++)
	{
		if(children[i]==girl)//??????girl???????lefts??????
		{
			right=i;
			left=lefts(children,children+i);
			if(i<sum-1)
				cout<<left<<" "<<right<<endl;
			else
				cout<<left<<" "<<right;//?????????
			children[left]=' ';
		}
	}
	return 0;
}
int lefts(char *head,char *p)
{
	int left;
	if(*p!=boy)//?????????????????
		left=lefts(head,p-1);
	else
		left=p-head;
	return left;
}