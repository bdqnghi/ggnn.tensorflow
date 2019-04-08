int main(int argc, char* argv[])
{
	char str[1000],a[50][100],b[50][100],min[100],max[100],temp[100],temp1[100];
	int n,i,m,l,flag,num;
	gets(str);
	flag=0;
	num=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ')
			flag=0;
		else if(flag==0)
		{
			flag=1;
			num++;
		}
	}
	for(i=0;i<num;i++)
	{
		static int j=0;
		for(m=0;j<strlen(str),m<strlen(str);j++,m++)
		{
	    	if(str[j]==' ')
			{
	    		m--;
		    	continue;
			}
	    	else
			{
		    	a[i][m]=str[j];
				if(str[j+1]==' ')
				{
					a[i][m+1]='\0';
					j++;
					break;
				}
			}
		}
	}
	for(i=0;i<num;i++)
	{
		strcpy(b[i],a[i]);
	}
	for(i=0;i<num;i++)
	{
		for(n=i+1;n<num;n++)
		{
			if(strlen(a[i])>strlen(a[n]))
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[n]);
				strcpy(a[n],temp);
			}
		}
	}
	strcpy(min,a[0]);
	strcpy(max,a[num-1]);
	for(i=0;i<num;i++)
	{
		if(strlen(min)==strlen(b[i]))
			break;
	}
	for(l=0;l<num;l++)
	{
		if(strlen(max)==strlen(b[l]))
			break;
	}
	puts(b[l]);
	puts(b[i]);
	return 0;
}