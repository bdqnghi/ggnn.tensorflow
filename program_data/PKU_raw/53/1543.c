int main()
{
	static int b[1000];
	int n,i,j,k=0,w,c;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
                     scanf("%d",&c);
                     w=0;
                     for(j=0;j<k;j++)
                     {if(c==b[j]) 
                     {w++;
                     break;}}
                     if(w==0)
                     {b[k]=c;
                     k++;}
                     }
                     printf("%d",b[0]);
 for(i=1;i<k;i++)
 printf(",%d",b[i]);
}
