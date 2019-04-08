

int main(int argc, char* argv[])
{
	char a[251]={'0'},b[251]={'0'},c[260]={'0'},d[260]={'0'};
	int i,al,bl,cl,j,k,p=0;
	char tmp1,tmp2,tmp3,tmp;
	gets(a);
	gets(b);
    al=strlen (a);
	bl=strlen (b);
tmp1='0';tmp2='0';tmp3='0';tmp='0';
	//if (a[al-2]=='7')
		//{al=al;
//printf ("%d\n",al);

	//else
		//al=al-1;
	
	for (i=al-1,j=bl-1,k=0;i>=0||j>=0;i--,j--,k++)
	{
		if (i>=0&&j>=0)
		{
   			
			if (a[i]-48+b[j]+tmp3-48>57)
			{
				tmp2=a[i]-48+b[j]+tmp3-48-10;
				tmp3='1';
				
			}
			else
			{
				tmp1=a[i]-48+b[j]+tmp3-48;
				tmp2=tmp1;
				tmp3='0';
			}
			c[k]=tmp2;
		}
		else if (i<0&&j>=0)
		{
            if (b[j]+tmp3-48>57)
			{
				tmp2=b[j]+tmp3-48-10;
				tmp3='1';
			}
			else
			{
				tmp1=b[j]+tmp3-48;
				tmp2=tmp1;
				tmp3='0';
			}
			c[k]=tmp2;
		}
		else if (i>=0&&j<0)
		{
			if (a[i]+tmp3-48>57)
			{
				tmp2=a[i]+tmp3-48-10;
				tmp3='1';
			}
			else
			{
				tmp1=a[i]+tmp3-48;
				tmp2=tmp1;
				tmp3='0';
			}
			c[k]=tmp2;
		}
	}
	if (tmp3=='1')
	{
		c[k]='1';
	    c[k+1]='\0';
	}
	else c[k]='\0';
    cl=strlen (c);
	for (i=cl-1;i>=0;i--)
	{
		if (c[i]=='0')
			p++;
		else 
			break;
	}
//	printf ("%d%d",p,cl);
	if (cl==1&&c[0]=='0')
		puts(c);
	else{
	for (i=cl-p-1;i>=0;i--)
		d[cl-p-i-1]=c[i];
	d[cl-p]='\0';
	puts (d);
	}
	//printf ("%d %d %d \n",al,bl,cl);
	
	return 0;
}

