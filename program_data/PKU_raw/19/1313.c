
void main()
{
	char s1[100],s2[100],s3[100],s[100];
	int a,b,c,i,n,j,k,q=1;
	gets(s1);
	gets(s2);
	gets(s3);
	a=strlen(s1);
	b=strlen(s2);
	c=strlen(s3);
	strcpy(s,s1);
	for(i=0;i<a;i++)
	{	

		for(j=0;j<b;j++)
		{
			if(s[i+j]!=s2[j])
			break;
		}
		if((j==b)&&((s[i-1]==' ')||(i==0)))
		{
			
			for(k=i;k<i+c;k++)
				s[k]=s3[k-i];
			for(k=i+c;k+(b-c)*q<a;k++)
				s[k]=s1[k+(b-c)*q];
			s[a+(c-b)*q]=0;
			
			q++;
		}
	}
	puts(s);
}