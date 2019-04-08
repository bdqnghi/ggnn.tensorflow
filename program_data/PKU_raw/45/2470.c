void main()
{
    char s[50],w[50],temp[50];
    int lenS,lenW,i,j;
    scanf("%s %s",s,w);
    lenS=strlen(s);
    lenW=strlen(w);
    for(i=0;i<lenW;i++)
        if(w[i]==s[0])
        {
        	for(j=i;j<i+lenS;j++)
        	temp[j-i]=w[j];
        	if(strcmp(s,temp)==0)
        	{
        	    printf("%d",i);
        	    break;
        	}
        }
}