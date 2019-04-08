void main()
{
	char s[50],w[50];
	scanf("%s %s",s,w);
	int sl,wl,i,j,p;
	sl=strlen(s);
	wl=strlen(w);
	for(i=0,j=0;i<wl,j<sl;)
	{
		if(s[j]!=w[i])
		{
			i++;
			continue;
		}
		if(s[j]==w[i])
		{
			p=i;
			j++;
			i++;
			
		}
	}
	p=p-sl+1;
	if(j==sl) printf("%d",p);
}