
int main()
{
    char c[1501]={' '};
	int i=0,j=0,k=0,l,m,n,max=-1,cmx=-1,tp=0;
	scanf("%s",c);
	l=strlen(c);
	i=l-1;
	while (i>0)
	{if (c[i]!=',') {tp=tp+(c[i]-'0')*pow(10,k);k++;}
	 else
	 {if (tp>=max) {if (tp>max) cmx=max;max=tp;}
	  else if (tp>cmx) cmx=tp;
	  tp=0;k=0;
	 }
	 i--;
	}
    tp=tp+(c[0]-'0')*pow(10,k);
	if (tp>=max) {if (tp>max) cmx=max;max=tp;}
	else if (tp>cmx) cmx=tp;
	tp=0;k=0;
	if (cmx==-1) printf("No");
	else printf("%d",cmx);
	return 7;
}



