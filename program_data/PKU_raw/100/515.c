//#include<stdafx.h>

void main()
{
	char str[300],*p;
	int a[26]={0},i,flag;

	gets(str);
	for(p=str;*p!='\0';p++)
	{
		for(i=0;i<26;i++)
			if(*p==i+'a')
				a[i]++;
	}
	for(i=0,flag=0;i<26;i++)
	{
		if(a[i]>0)
		{printf("%c=%d\n",i+'a',a[i]);flag=1;}
	}
	if(!flag)
		printf("No");
}