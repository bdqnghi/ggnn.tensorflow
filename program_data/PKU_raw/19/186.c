int main()
{
	char a[200],b[200],c[200],d[200];
    int ai=0,lb,la,lc,bi=0,ci=0,di=0,k;
    gets(a);
	scanf("%s",&b);
	scanf("%s",&c);
	lb=strlen(b);la=strlen(a);lc=strlen(c);
    while (ai!=la)
	{
		bi=0;ci=0;
		if (ai!=0)
		{
		if ((a[ai]==b[bi]) && (a[ai-1]==' '))
		{   
			
			k=ai; 
		    while ((a[ai]==b[bi]) && (a[ai]!=' ') && (a[ai]!='\0'))
			{    bi++; ai++; }
            if (bi==lb) 
			{ 
			    while (ci!=lc)
				{
			      d[di]=c[ci];
				  di++;ci++;
				}
			}
			else 
			{ 
			   ai=k;d[di]=a[ai];
			   di++;ai++;
			}
		}
		else 
		{
			d[di]=a[ai]; ai++;di++;
		}
		}
		else 
		{
		if (a[ai]==b[bi])
		{   
			
			k=ai; 
		    while (a[ai]==b[bi]) 
			{    bi++; ai++; }
            if (bi==lb) 
			{ 
			    while (ci!=lc)
				{
			      d[di]=c[ci];
				  di++;ci++;
				}
			}
			else 
			{ 
			   ai=k;d[di]=a[ai];
			   di++;ai++;
			}
		}
		else 
		{
			d[di]=a[ai]; ai++;di++;
		}
		}
		
		
	}
//	puts(a);puts(b);puts(c);
	d[di]='\0';
//	printf("%d",la);
	puts(d);
	return 0;
}
