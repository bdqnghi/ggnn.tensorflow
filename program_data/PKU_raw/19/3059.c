int main()
{
	char zifu[101],word[100][20]={" "},x[20],y[20]; 
	int n,i,j,s,t=0,p=0,num;/*num?????????+1*/
	gets(zifu);
	gets(x);
	gets(y);
	n=strlen(zifu);
	for(i=0;i<n;i++)
	{
		if(zifu[i]!=' ')
		{
			word[t][p]=zifu[i];
			p++;
		}
		else if(zifu[i]==' ')
		{
			p=0;
			t++;
		}
		num=t+1;
	}
	for(i=0;i<num;i++)
	{
		if(!strcmp(word[i],x))
		{
			strcpy(word[i],y);
		}
	}
	printf("%s",word[0]);
	for(i=1;i<num;i++)
	{
	  printf(" %s",word[i]);
	}
   return 0;
}



