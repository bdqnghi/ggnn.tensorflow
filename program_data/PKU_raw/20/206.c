void main()
{
	int i,j,a;
	char c,str[800],substr[4],str0[800],max;
	while((scanf("%s %s",str,substr))!=EOF)
	{
		a=strlen(str);
		max=str[0];
		for(i=0;i<a;i++)
			if(str[i]>max)
				max=str[i];
		for(i=0;i<a;i++)
			if(str[i]==max)
				break;
		for(j=0;j<=i;j++)
			str0[j]=str[j];
		for(j=i+1;j<a;j++)
			str0[j+3]=str[j];
		str0[i+1]=substr[0];
		str0[i+2]=substr[1];
		str0[i+3]=substr[2];
	    for(i=0;i<a+3;i++)
			printf("%c",str0[i]);
		printf("\n");
	}
}
