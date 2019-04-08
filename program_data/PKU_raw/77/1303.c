void main()
{
	int i,j=0,p[50];
	char s[100],c1,c2;
	gets(s);
	c1=s[0];
	for(i=0;i<50;i++)
		p[i]=0;
	for(i=1;i<strlen(s)/2+1;i++)
		if(s[i]!=c1){
			c2=s[i];
			break;
		}
	for(i=0;i<strlen(s);i++){
		if(s[i]==c1)
			p[j++]=i;
		else
			printf("%d %d\n",p[j---1],i);
	}

}
