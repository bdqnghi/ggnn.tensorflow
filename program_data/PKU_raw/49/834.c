int main()
{
	int i,j,l,k,p,q;
	char c[500],temp[500]={0};
	gets(c);
	l=strlen(c);
	for(i=1;i<l;i++)  //i+1???
	{
		for(j=0;j<l-i;j++)  //j????
		{
			for(k=0;k<=i;k++)
			{
				temp[k]=c[j+k];
			}
			for(p=0;p<=(i+1)/2-1;p++)
			{
				if(temp[p]!=temp[i-p]) break;
				if(p==(i+1)/2-1) printf("%s\n",temp);
			}
			for(q=0;q<500;q++) temp[q]=0;
		}
	}
	return 0;
}