int main()
{
	char *p1,*p2,*p3;
	p1=(char*)malloc(120);
	gets(p1);
	for(p2=p1;*p2;p2++)
	{
		if((*p2)>='0'&&(*p2)<='9') //??????0~9???
		{
			for(p3=p2;(int)(*p3)-'0'>=0&&(int)(*p3)-'0'<=9;p3++)//??????????
			printf("%c",*p3);
			printf("\n");
			p2=p3;//???????
			p2--;
		}
	}
}