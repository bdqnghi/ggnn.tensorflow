void main()
{
    int effect(int n,int m);
    int b[20],c[20],j=0,k;
    for (k=1;k<=20;k++){
    scanf("%d %d",&b[k],&c[k]);
    if (b[k]!=0 || c[k]!=0)
	        j++;
    else break;}
	for (k=1;k<=j;k++)
		printf("%d\n",effect(b[k],c[k]));
}

int effect(int n,int m)
{
    int i,s=0;
    for (i=2; i<=n; i++) 
		s=(s+m)%i;
    return(s+1);        
}

