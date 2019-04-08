
int main()
{
	int n,i;
	scanf("%d",&n);
	char ml[256],*ps;
	for(i=0;i<n;i++){
		scanf("%s\n",ml);
		for(ps=ml;*ps!='\0';ps++){
			if(*ps=='A')
				*ps='T';
			else if(*ps=='T')
				*ps='A';
			else if(*ps=='C')
				*ps='G';
			else
				*ps='C';
		}
		puts(ml);
	}
}

