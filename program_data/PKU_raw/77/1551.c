
struct bg
{
	int b;
	int g;
};

int main()
{
	char peo[101]={0},e;
	int i,j,k=0,l;
	struct bg bag[50];

	gets(peo);

    l=strlen(peo);
	e=peo[l-1];
	for(i=1;i<l;i++)
	{
		if(peo[i]==e)
		 for(j=i-1;j>=0;j--)
				  if(peo[j]!='\0')
					  { bag[k].b=i;
		                bag[k].g=j;
						k++;
						peo[i]='\0';
						peo[j]='\0';
				        break;}
	}
		for(i=0;i<k;i++)
			printf("%d %d\n",bag[i].g,bag[i].b);

		return 0;
	}
		  
