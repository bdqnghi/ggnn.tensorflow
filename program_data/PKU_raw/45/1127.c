int main()
{
    char s[50],w[50];
    int i,j;
    scanf("%s%s",s,w);
    for(i=0;i<=strlen(w)-strlen(s);i++)
    {
                                      for(j=0;j<strlen(s);j++)
                                      {
                                                              if(s[j]!=w[j+i])
                                                              break;
									  }
									if(j==strlen(s))
									{
															printf("%d",i);
															return 0;
									}
									
	}
    return 0;
}