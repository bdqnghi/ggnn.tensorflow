void main()
{
	int i,j,k,n,num[101];
    char a[101],B,G;
	gets(a);
	n=strlen(a);           //n???
	B=a[0];                //??????????
	G=a[n-1];
    for(i=0;i<=n-1;i++)    //??????
		num[i]=i;
    for(i=1;i<=(n/2);i++)    //?i?
		for(j=0;j<=((n-1)-2*(i-1)-1);j++) //???i??a?????
		{
            if(a[j]==B&&a[j+1]==G)
			{
				printf("%d %d",num[j],num[j+1]);
				printf("\n");
                for(k=j+2;k<=((n-1)-2*(i-1));k++)
				{
					a[k-2]=a[k];
					num[k-2]=num[k];
				}
				j=-1;
			}
		}
}

