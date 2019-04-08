void fanxu(char *p,int len);
int compare(char *p1,char* p2,int length);
int main()
{
	char char_array[500],store1[500],store2[500],*p;
	gets(char_array);
    p=char_array;
	int len,i,j,k;
	len=strlen(char_array);
	for(k=0;k<=499;k++)
	{
		store1[k]='\0';
		store2[k]='\0';
	}
	for (i=2;i<=len;i++)
	{
		for(p=char_array;p<=char_array+len-i;p++)
		{
			for(k=0;k<=i-1;k++)
			{
				store1[k]=*(p+k);
				store2[k]=store1[k];
			}
			fanxu(store1,i);
			//printf("str1=");
			//puts(store1);
			//printf("str2=");
			///puts(store2);
			if (compare(store1,store2,i)==1)
			{
				puts(store2);
			}
		}
	}
}
void fanxu(char *p,int len)
{
	char *l,*m,c;
	for (l=p,m=p+len-1;l<m;l++,m--)
	{
		c=*m;
		*m=*l;
		*l=c;
	}
}
int compare(char *p1,char* p2,int length)
{
	int w;
	int exist=1;
	for (w=0;w<=length-1;w++)
	{
		if (*(p1+w)!=*(p2+w))
		{
			exist=0;
		}
	}
	return exist;
}

