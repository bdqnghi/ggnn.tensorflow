int main()
{
    int n,T=0,A=0,B=0;
    int sz[200][2];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int a=0;a<2;a++)
        {
            scanf("%d",&sz[i][a]);
        }
    }
    for(int b=0;b<n;b++)
    {
                   if((sz[b][0]==0&&sz[b][1]==1)||(sz[b][0]==1&&sz[b][1]==2)||(sz[b][0]==2&&sz[b][1]==0))
			A++;
		if((sz[b][0]==1&&sz[b][1]==0)||(sz[b][0]==2&&sz[b][1]==1)||(sz[b][0]==0&&sz[b][1]==2))
			B++;
    }
    if(A==B)
	printf("Tie");
    if(A>B)
	printf("A");
    if(A<B)
	printf("B");
return 0;
}