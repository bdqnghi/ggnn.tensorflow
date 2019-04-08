int main()
{
	int n1,n2,n3,i,j;
	char a1[100]={'\0'},a2[100]={'\0'},a3[100]={'\0'};
	char *p1=&a1[0],*p2=&a2[0],*p3=&a3[0],*p_end,*p_in=&a1[0],*p,*p_cyc=&a1[0];
	
	gets(a1);
	gets(a2);
	gets(a3);
	n1=strlen(a1);
	n2=strlen(a2);
	n3=strlen(a3);
	p_end=&a1[n1-1];
	for(p1=&a1[0];p1<=p_end;p1++)
	{
		if(*p2==*p1)
		{
			p_in=p1;
			for(j=0;j<n2;j++)
			{
				if(*p2!=*p1)
				{
					p1--;
					break;
				}
				else
				{p2++;p1++;}
				
			}
			p2=&a2[0];
			if(j==n2&&*(p_in-1)==' ')//??
			{

				if(n3>n2)
				{
					p=p_end;
					
					//
					while(p>=p1)
					{
						*(p+n3-n2)=*p;
						p--;
					}
					p1=p1+n3-n2;
				}
				if(n3<n2)
				{
					p=p1;
					p1=p+n3-n2;
					
					while(p<=p_end)
					{
						*(p+n3-n2)=*p;
						p++;
					}
				}p_end=p_end+n3-n2;

			while(p_in<p1)//??
			{
				*p_in=*p3;
				p_in++;
				p3++;
			}
			}
			else if(j==n2&&p_in==&a1[0])//??
			{

				if(n3>n2)
				{
					p=p_end;
					
					//
					while(p>=p1)
					{
						*(p+n3-n2)=*p;
						p--;
					}
					p1=p1+n3-n2;
				}
				if(n3<n2)
				{
					p=p1;
					p1=p+n3-n2;
					
					while(p<=p_end)
					{
						*(p+n3-n2)=*p;
						p++;
					}
				}p_end=p_end+n3-n2;

			while(p_in<p1)//??
			{
				*p_in=*p3;
				p_in++;
				p3++;
			}
			}
			
			
			p3=&a3[0];
		}
	}
for(p=&a1[0];p<=p_end;p++)
{
	printf("%c",*p);
}


	return 0;
}