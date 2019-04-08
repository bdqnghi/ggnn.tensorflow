int main()
{
	int i,len1,len2,len3,j,m=0,l;
	char zifu[256],chazhao[256],tihuan[256];
	scanf("%s%s%s",zifu,chazhao,tihuan);
	len1=strlen(zifu);
	len2=strlen(chazhao);
	len3=strlen(tihuan);
	for(i=0;i<len1;i++)
	{   m=0;
		if(zifu[i]==chazhao[0])
		{
			for(j=0;j<len2;j++)
			{
				if(zifu[i+j]==chazhao[j])
					m++;
				if(zifu[i+j]!=chazhao[j])
					break;
			}

		}
			if(m==len2)
				break;

	}


	if(i<len1)
	{
		if(len2==len3)
		{
			for(l=0;l<len2;l++)
				zifu[i+l]=tihuan[l];
		}
		else if(len2>len3)
		{
			for(l=0;l<len3;l++)
			{
				zifu[i+l]=tihuan[l];
			}
			for(l=i+len2;l<len1+1;l++)
				zifu[l+len3-len2]=zifu[l];
		}
		else if(len2<len3){
			for(l=i+len2;l<len1+1;l++)
				zifu[l+len3-len2]=zifu[l];
			for(l=0;l<len3;l++)
				zifu[i+l]=tihuan[l];
		}
	}

	printf("%s\n",zifu);
	return 0;
}
