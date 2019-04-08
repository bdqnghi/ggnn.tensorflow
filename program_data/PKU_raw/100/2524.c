struct abb{
	char c;
	int sum;
};

int main()
{
	int i,j,k,l;
	char s[400]; 
	struct abb aa[60];
	struct abb a;

	for(i=0;i<60;i++)
	{
		aa[i].c='0';
		aa[i].sum=0;
	}

	gets(s);
	l=strlen(s);
	j=0;

	for(i=0;i<l;i++)
		if(s[i]>='A'&&s[i]<='Z')
		{
			for(k=0;k<j;k++)
				if(s[i]==aa[k].c)
				{	aa[k].sum++;
				break;}
				
				if(k==j){
				aa[j].c=s[i];
				aa[j].sum++;
				j++;
				}
		}

		else if(s[i]>='a'&&s[i]<='z')
		{
			for(k=0;k<j;k++)
				if(s[i]==aa[k].c)
				{	aa[k].sum++;
				break;}
				
				if(k==j){
				aa[j].c=s[i];
				aa[j].sum++;
				j++;
				}
		}

		if(j==0)
			printf("No");
		else if(j==1)
			printf("%c=%d",aa[0].c,aa[0].sum);
		else{

		for(i=1;i<j;i++)
			for(k=0;k<j-i;k++)
				if(aa[k].c>aa[k+1].c)
				{	a=aa[k];
				aa[k]=aa[k+1];
				aa[k+1]=a;
				}


				for(i=0;i<j;i++)
					printf("%c=%d\n",aa[i].c,aa[i].sum);
		}

		return 0;
}

			    

