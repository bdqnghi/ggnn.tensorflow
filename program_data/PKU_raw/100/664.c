int main(int argc, char* argv[])
{  
    char s[301];
	gets(s);


	char b[301],d[30];
	char t;
	int i,j=0,h=0;
	int len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			b[j]=s[i];
			j++;
		}
	}
	if(j==0){
		printf("No\n");}


    int c[30]={0},m;
	char k;
	for(k='a';k<='z';k++)
	{
	    for(m=0;m<j;m++)
		{
			if(b[m]==k)
			{
				d[h]=k;
				h++;
				break;
			}
        }
	}
    for(k=0;k<h;k++)
	{
	  for(i=0;i<j;i++)
	  {
		if(b[i]==d[k])
		{
			c[k]++;
		}
	  }
	}
			



  	for(i=0;i<h;i++)
	{
		printf("%c=%d\n",d[i],c[i]);
	}
	return 0;
}
