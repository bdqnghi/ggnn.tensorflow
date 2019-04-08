int main ()
{
	char zfc[2000];
	gets(zfc);
	int c;
	c=strlen(zfc);
    char tzfc[2000];
	char hzfc[2000];
	gets(tzfc);
	gets(hzfc);
	int ct,ch;
	ct=strlen(tzfc);
	ch=strlen(hzfc);

	
	int i,wei,an=0,x,deng=0;
	for(i=0;i<c;i++)
	{
	     int flag=0;
		 for(x=i;x<ct+i;x++)
		 {
		    if(zfc[x]!=tzfc[x-i])
			{
		    flag=1;
			}
		    if(flag==1)
			{
		    break;
			}
		 }
	     if(flag==0)
		 {
		 wei=i;
		 an++;
		 deng=1;
		 }
		 
		 
	  if(an==1)
	  {
	  break;
	  }
	}

    if(deng==0)
	{
	puts(zfc);
	}
    else
	{

    int xzfc[2000];
	for(i=0;i<wei;i++)
	{
	xzfc[i]=zfc[i];
	}
	for(i=wei;i<ch+wei;i++)
	{
	xzfc[i]=hzfc[i-wei];
	}
	for(i=ch+wei;i<c-ct+ch;i++)
	{
	xzfc[i]=zfc[i-(ch-ct)];
	}
	
	
	for(i=0;i<c-ct+ch;i++)
	{
	printf("%c",xzfc[i]);
	}
    
    }
	return 0;
}
