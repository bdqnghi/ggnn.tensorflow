void main()
{
	int i,k=-1;
	char zjy[30000];
         gets(zjy);
	while(k==-1||zjy[k]!='\0')
		{
			k++;
			for(i=0;zjy[k]!=' '&&zjy[k]!='\0';k++)i++ ;
			if(i!=0)
                            {if(zjy[k]==' ')printf("%d,",i);
			 else printf("%d\n",i);}
		}
}