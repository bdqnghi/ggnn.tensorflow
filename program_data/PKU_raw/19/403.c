void main()
{
	char str[200],a[101],b[101];
	char *ptemp,*pstr,*pa,*pb;
	int flag,lstr,la,lb;
	pstr=str;
	pa=a;
	pb=b;
	gets(pstr);
	gets(pa);
	gets(pb);
	lstr=strlen(pstr);
	la=strlen(pa);
	lb=strlen(pb);
	for (;pstr<=str+lstr-1;pstr++)
	{
		flag=1;
		while ((*pstr!=' ') && (*pstr!='\0'))
		{
			if (*pstr!=*pa) flag=0;
			pstr++;
			pa++;
		}
		if ((flag) && (pa==a+la))
		{
			ptemp=pstr;
			if (la<lb)    //add room
			{
				for (pstr=str+lstr;pstr>=ptemp;pstr--) *(pstr+lb-la)=*pstr;
				for (pstr=ptemp-la;pb<=b+lb-1;pb++,pstr++) *pstr=*pb;
				pb=b;
				lstr=lstr+lb-la;
			}
			if (la>=lb)  //cut room
			{
				for (pstr=ptemp-la+lb;pstr<=str+lstr-la+lb;pstr++) *pstr=*(pstr+la-lb);
				for (pstr=ptemp-la;pb<=b+lb-1;pb++,pstr++) *pstr=*pb;
				pb=b;
				lstr=lstr-la+lb;
			}
		}
		pa=a;
	}
	pstr=str;
	printf("%s",pstr);
}
