int main(int argc, char* argv[])
{
	char s[210]={'\0'},a[100],b[100];
	int i,j,x=0,k=0,q,l=0,d,p,m,dd,sl;
	gets(s);
	gets(a);
	gets(b);
    sl=strlen(s);
	l=strlen(a);
	d=strlen(a)-strlen(b);
	for(i=0;s[i]!='\0';i++)
	{   
		x=0;
		for(k=0;a[k]!='\0';k++)
		{
			if(s[i+x]==a[k])
			{
			     x++;
			}
			else
				break;
		}
		if(l==x&&(s[i-1]==' '||i==0)&&(s[i+x]==' '||s[i+x]=='\0'))
		{
			
			if(d>=0)
			{
				for(q=i+x;s[q]!='\0';q++)
				{
					s[q-d]=s[q];
				}
				for(m=0;m<d;m++)
				{
					s[q-d+m]='\0';
				}
			}
			else if(d<0)
			{
				dd=-d;
				for(q=sl-1;q>=i+x;q--)     /*?????????s[q]!='\0'???
					                            ???????'\0'???       */
				{
					s[q+dd]=s[q];	
				}
				sl=sl+dd;
			}
			p=i;
			for(j=0;b[j]!='\0';j++)
			{
				s[p]=b[j];
				p++;
			}
		}
		
	}
	puts(s);
	return 0;
}