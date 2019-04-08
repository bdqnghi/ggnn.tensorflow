int main()
{
	char c[100],*p=c;
    int a[50],*q=a,num=0,i;
    gets(c);
    for(; *p!='\0'; p++)
		if(*p>='0' && *p<='9'){
			*q=(*p)-'0';
            p++;
			while(*p>='0' && *p<='9')
				*q=(*q)*10+(*(p++)-'0');
			num+=1;
			q+=1;
		}
	for(i=0,q=a; i<num; i++,q++)
		printf("%d\n",*q);        
}
