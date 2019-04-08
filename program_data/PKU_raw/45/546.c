main()
{
	char str[100];
	char *p1,*p2,*p3;
	int i,k=0;
	gets(str);
	for(p1=str;*p1!=' ';p1++);//???????
	p2=p1+1;
	*p1='\0';
	p1=str;        //p1?p2????????
	for(i=0;k<1;p2++,i++)
	{
		p1=str; p3=p2;
		if(*p3==*p1)
		{
			for(;*p1!='\0';p3++,p1++)
			{
				if(*p1==*p3) k=k+1;
				else {k=k*0; break;}
			}
		}
	}
	if(k!=0)
	printf("%d",i-1);

}