void main()
{
	char q,str[300],alp[300];
	int val,i,j,len,t[300]={1},m=0;
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>='a')&&(str[i]<='z')) {alp[m]=str[i];m++;}//????m?????
	}
	if(!m) printf("No\n");
	else
	{

	for(i=0;i<m-1;i++)//????????
		for(j=0;j<m-1-i;j++)
		if(alp[j]>=alp[j+1])
		{q=alp[j];
		alp[j]=alp[j+1];
		alp[j+1]=q;
		}	
	for(i=1;i<m;i++)
	{val=1;
		for(j=0;j<i;j++)
		{if(alp[i]!=alp[j]) continue;
		else{val=0;t[j]++;break;}
		}
		if(val) t[i]++;
	}
	for(i=0;i<m;i++)
	{
		if(t[i]!=0) printf("%c=%d\n",alp[i],t[i]);
	}
	}
}