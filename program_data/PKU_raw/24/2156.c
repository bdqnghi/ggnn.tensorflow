void main()
{
	int i,j,k,m,n,p,q;
	char ch[40],sh[40];
	char lolo[3000]="\0";
	char alei[40]="\0";
	gets(lolo);
	k=0;m=41;
	for(i=0;lolo[i]!='\0';i++)
	{   
		if(lolo[i]==' '||lolo[i]==',') i++;
		for(j=0;lolo[i]!=' '&&lolo[i]!=','&&lolo[i]!='\0';i++,j++)
		{
            alei[j]=lolo[i];
		}
		alei[j]='\0';
		if(j>k) {strcpy(ch,alei);k=j;}
		if(j<m) {strcpy(sh,alei);m=j;}
	}
	printf("%s\n",ch);
	printf("%s\n",sh);

}