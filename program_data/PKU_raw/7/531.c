int main()
{
	char s[300],subs[15],reps[15];
	int i,j,k,ls,lsub,lrep,w;
	scanf("%s",s);
	scanf("%s",subs);
	scanf("%s",reps);
	ls=strlen(s);
	lsub=strlen(subs);
	lrep=strlen(reps);
	for(i=0;i<ls;i++)
	{
		w=0;
		for(j=0;j<lsub;j++)
		{
			if(s[i+j]==subs[j]) w++;
		}
		if(w==lsub)
		{
			for(k=0;k<i;k++)
				printf("%c",s[k]);
			for(k=0;k<lrep;k++)
				printf("%c",reps[k]);
			for(k=i+lsub;k<ls;k++)
				printf("%c",s[k]);
			break;
		}
	}
	if(w!=lsub) printf("%s\n",s);
	return 0;
}

