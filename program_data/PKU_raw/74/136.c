void main()
{   int sushu(int k);
    int huiwen(int k);
    int n,m,i,a[100],h=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {    if((sushu(i)==1)&&(huiwen(i)==1))
        {  a[h]=i;h++;}
	}
    if(h==0)printf("no");
	else 
	{   printf("%d",a[0]);
        for(i=1;i<h;i++)
			printf(",%d",a[i]);
	}
}
int sushu(int k)
{   int i,j=0,s;
    for(i=2;i<=sqrt(k);i++)
        if(k%i==0)j++;
    if(j==0)s=1;
    else s=0;
    return(s);
}
int huiwen(int k)
{   int i=0,j,s=k,p=0;
    int a[10];
    while(k!=0)
    {   a[i]=k%10;
        k=k/10;
        i++;
    }
    for(j=0;j<i;j++)
       p=p*10+a[j];
    if(p==s)return(1);
    else return(0);
} 
    
    