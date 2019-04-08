void main()
{
	char c,d,str1[256],str2[256],str3[256];
	int l,h,i,j=0,k,st=0;
	scanf("%s",str1);
	scanf("%s",str2);
	scanf("%s",str3);
	l=strlen(str2);
	for(i=0;((c=str2[i])!='\0');i++)
	{
		c=str2[i];
		for(;((d=str1[j])!='\0');j++)
		{
			d=str1[j];
			if(c==d)
			{
				st=st+1;
				j=j+1;
				break;
			}
			else if((c!=d)&&(st!=0))
			{
				st=0;
				i=-1;
				break;
			}
		}
	}
	if(st==l)
	{
		for(h=0,k=(j-l);k<j;k++,h++)
		{
			str1[k]=str3[h];
		}
		printf("%s\n",str1);
	}
	else printf("%s\n",str1);
}

