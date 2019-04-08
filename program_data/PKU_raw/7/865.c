int main()
{
	char yuan[256]={0}, huan[256]={0}, hou[256]={0};
	int i, e, k, len1, len2, len3, count;
	gets(yuan);
	gets(huan);
	gets(hou);
	len1=strlen(yuan);
	len2=strlen(huan);
	len3=strlen(hou);

    int p=0;
	for(i=0;i<len1-len2+1;i++)
	{
		count=0;
		if(yuan[i]==huan[0])
		{
			for(e=0;e<len2;e++)
				if(yuan[i+e]==huan[e]) count++;
            if(count==len2)
	       	{
         			for(k=0;k<i;k++) printf("%c", yuan[k]);
           			for(k=i;k<len3+i;k++) printf("%c", hou[k-i]);
	          		for(k=i+len2;k<len1;k++) printf("%c", yuan[k]);
	          		p=1;
		         	break;
	       	}
  
		}
 	}
 	
 	if (p==0) printf("%s",yuan);
	return 0;
}