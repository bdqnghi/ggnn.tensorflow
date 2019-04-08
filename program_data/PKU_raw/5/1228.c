int main(){
	double bi,p;
	int len1,len2,i,flag,s=0;
	char zfc[2][501];
	scanf("%lf",&bi);
	for(i=0;i<2;i++)
	{
		scanf("%s",zfc[i]);
	}
	len1=strlen(zfc[0]);
	len2=strlen(zfc[1]);
	if(len1!=len2)
	{
		flag=1;
	}
	else
	{
		for(i=0;i<len1;i++)
		{
		   if((zfc[0][i]!='A'&&zfc[0][i]!='T'&&zfc[0][i]!='G'&&zfc[0][i]!='C')||(zfc[1][i]!='A'&&zfc[1][i]!='T'&&zfc[1][i]!='G'&&zfc[1][i]!='C'))
		   {
			  flag=1;
		   }
		   
		   else
		   {
			 flag=0;
		   }
		}
	}
	if(flag==1)
	{
		printf("error");
	}
	else if(flag==0)
	{
		for(i=0;i<len1;i++)
		{
			if(zfc[0][i]==zfc[1][i])
			{
				s=s+1;
			}
			else
			{
				s=s;
			}
		}
		p=s*1.0/len1;
		if(p>bi)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	
	}
	return 0;
}