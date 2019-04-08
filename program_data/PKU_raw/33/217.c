int main()
{
    int n,i,j;
    char an[1000][1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",&an[i]);
        for(j=0;an[i][j]!=0;j++)
        {
            if(an[i][j]=='A')
			   printf("T");
		   else if(an[i][j]=='T')
			   printf("A");
		   else if(an[i][j]=='C')
			   printf("G");
		   else if(an[i][j]=='G')
			   printf("C");
        }
        printf("\n");
    }
    return 0;
}
