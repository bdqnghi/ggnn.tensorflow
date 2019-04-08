int main(){
	int i=0,j=0;
	char shuru[50],shuchu[50],*p,*q;
	p=shuru;
	q=shuchu;
	while(1)
	{
		shuru[i]=cin.get();
		if(shuru[i]=='\n')break;
		i++;
	}
	for(int k=0;k<i;k++)
	{
		if(*p>='0'&&*p<='9')
		{
			*(q++)=*(p++);
			j++;
		}
		else if(*(q-1)=='\n')
		{p++;}
		else
		{
			*(q++)='\n';
			j++;
			p++;
		}
	}
	for(int k=0;k<j;k++)
	{
		cout<<shuchu[k];
	}
	return 0;
}
