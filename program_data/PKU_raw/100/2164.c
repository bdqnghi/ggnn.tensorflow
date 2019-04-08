int main()
{
	char zfc[301];
    char p1,p2;
	int i,j=0,k=0,tag=0,d[26]={0},x[26]={0};
	scanf("%s",zfc);
	for(p1='A';p1<='Z';p1++,j++)
	{
		for(i=0;zfc[i]!='\0';i++)
			if(zfc[i]==p1)
			{
				d[j]++;
				tag=1;
			}
	}
    for(p2='a';p2<='z';p2++,k++)
	{
		for(i=0;zfc[i]!='\0';i++)
			if(zfc[i]==p2)
			{
				x[k]++;
				tag=1;
			}
	}
	if(tag==0)
		printf("No");
	else 
	{
		for(p1='A',j=0;p1<='Z',j<26;p1++,j++)
		{
		    if(d[j]!=0)
			    printf("%c=%d\n",p1,d[j]);
		}
        for(p2='a',k=0;p2<='z',k<26;p2++,k++)
		{
		    if(x[k]!=0)
			    printf("%c=%d\n",p2,x[k]);
		}
	}
	return 0;
}
				
			
