void main()
{
	char *p=(char*)malloc(31*sizeof(char));
	gets(p);
	for(;*p!='\0';p++)
	{if(*p>47&&*p<58)printf("%c",*p);
		if((*(p-1)>47&&*(p-1)<58)&&(*p<48||*p>57))
			printf("\n");}
}

