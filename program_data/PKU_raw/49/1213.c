void main()
{
    char str1[500]={0},str2[500]={0};
	int i,start,k,l,p=0,q,f,d;
	gets(str1);
	l=strlen(str1);
	for(i=2;i<=l;i++)//?????
	{
		for(start=0;start<l;start++)//????
		{
			d=start;
			f=0;
			p=0;

            for(k=start+i-1;k>=start;k--)//????
			{
				str2[p]=str1[k];
				p++;
			}
            for(q=0;q<p;q++)//??
			{	
				if(str2[q]==str1[d])
				{
					f=1;
					d++;
				}
				else
				{
					f=0;
					break;
				}
			}

			if(f==1)
			{
				puts(str2);
			}
		}

	}
}
 
 