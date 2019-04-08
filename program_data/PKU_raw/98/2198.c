int main()
{
	char word[40];
	int i,n,len,hang=0,shou=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
			{
			 scanf("%s",word);
			 len=strlen(word);
			 hang+=len;
			 hang+=1;
			 if(hang<=80)
						 { if(shou==1)
						   { printf("%s",word);hang-=1;}
							 else 	{ printf(" %s",word);}
						    shou=0;
						 }
			 else if(hang>80){printf("\n");printf("%s",word); shou=0;hang=len;}
			}

return 0;
}
