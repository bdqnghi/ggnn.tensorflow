int main()
{   
	char s[100]={0},w[100]={0};
	int lens,lenw,i,j,k,t=0;
	scanf("%s %s",s,w);
	lens=strlen(s);
	lenw=strlen(w);
    for(i=0;i<lenw;i++)
	{
		if (w[i]==s[0]) 
		{
			for(j=i,k=0;j<=i+lens,k<=lens-1;j++,k++)
            {if (w[j]==s[k]) t++; }
		}
		if (t==lens) {printf("%d",i);break;}
	}
	return 0;
}