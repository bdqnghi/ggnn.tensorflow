int main()
{
    char sa[250],sb[250],s[250],t[250],temp;
    int la,lb,i,l,c=0,dl; 
    scanf("%s %s",sa,sb); 
    la=strlen(sa);
    lb=strlen(sb);
	if (la>lb)
		l=la;
	else
	{
		l=lb;
		strcpy(t,sa);
		strcpy(sa,sb);
		strcpy(sb,t);
	}
	dl=abs(la-lb);
    for(i=l;i>0;i--)
	{
		if(i-dl-1>=0)
			temp=sb[i-dl-1];
		else
			temp='0';
		if ((int)sa[i-1]+(int)temp+c-96>9)
		{
			s[i]=sa[i-1]+temp-58+c;
			c=1;
		}
		else
		{
			s[i]=sa[i-1]+temp-48+c;
			c=0;
		}
    } 
	if (c==1)
		s[0]='1';
	else
		s[0]='0';
	c=1;
    for (i=0;i<=l;i++)
	{
		if (s[i] !='0' || c==0)
		{
			printf("%c",s[i]);
			c=0;
		}
	}
	printf("\n");
	return 0;
}