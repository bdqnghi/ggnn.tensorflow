int main()
{
	int a[300],b[300];
    int max,sec_max,i,len=0,j=0,k;
    char c;
    while(1)
    {scanf("%d",&a[len]);scanf("%c",&c);
    len+=1;
    if(c=='\n') break;}
    if(len==1) printf("No\n");
    else
    {max=a[0];
    for(i=0;i<len;i++)
    	if(a[i]>max) max=a[i];
    for(i=0;i<len;i++)
    	if(a[i]<max) {b[j]=a[i];j+=1;}
    sec_max=b[0];
    for(k=0;k<j;k++)
    	if(b[k]>sec_max) sec_max=b[k];
    if(j==0) printf("No");
    else printf("%d\n",sec_max);}
    return 0;
}