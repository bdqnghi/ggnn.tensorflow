int main()
{
	char cha[200][50],te[200][50];
	int e,num[200],a=0,b,c,d,temp;
	while(~scanf("%s",cha[a]))
	{
		a++;
	}
	for(b=0;b<a;b++)
	{
		num[b]=strlen(cha[b]);
	}
	for(c=0;c<a;c++)
	{
		for(d=0;d<a-c-1;d++)
		{
		      if(num[d]>num[d+1])
            {temp=num[d+1];
			num[d+1]=num[d];
			num[d]=temp;
			strcpy(te[d],cha[d]);
			strcpy(cha[d],cha[d+1]);
			strcpy(cha[d+1],te[d]);}
		}
	}
	for(e=a-1;e>=0;e--)
	if (num[e]!=num[e-1])
	{printf("%s\n%s",cha[e],cha[0]);
	break;}
	return 0;
}