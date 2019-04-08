int main()
{
	char d[256];
	char words[50][256]={0};
	char a[100],b[100];
	int n=1,flag=1;
	int i,j,k=-1,l;
	gets(d);
	gets(a);
	gets(b);
	for (i=0;d[i]!='\0';i++)
	{
		if (d[i]==' ')
		{	
			n++;
		}
	}
	for (i=0;i<n;i++)
	{
		for (k=k+1,j=0;d[k]!='\0'&&d[k]!=' ';j++,k++)
		{
			words[i][j]=d[k];
					}
	}
		for(i=0;i<n;i++){
			l=strcmp(words[i],a);
		
      if(l==0){
     strcpy(words[i],b);
    flag=0;


    }
		
   
		}



if(flag==0){
printf("%s",words[0]);
for(i=1;i<n;i++){
   printf(" %s",words[i]);


}

}
if(flag==1){
  printf("%s",d);

}
	return 0;


}