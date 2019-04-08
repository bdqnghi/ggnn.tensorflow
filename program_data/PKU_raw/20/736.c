int main()
{
	char s1[100][15]={'\0'},s2[100][4];
	int i=0,j,max,k,u;
         while (scanf("%s%s\n",&s1[i],&s2[i])!=EOF)i++;
	for(j=0;j<=i;j++)
	{
		max=0;
		k=1;
		while(s1[j][k]!='\0')
		{
			if(s1[j][k]>s1[j][max])max=k;
			k++;
		}
		for(u=k-1;u>max;u--)
		{
			s1[j][u+3]=s1[j][u];
		}
		s1[j][max+1]=s2[j][0];
		s1[j][max+2]=s2[j][1];
		s1[j][max+3]=s2[j][2];
		s1[j][k+3]='\n';
		printf("%s",s1[j]);
}
}
