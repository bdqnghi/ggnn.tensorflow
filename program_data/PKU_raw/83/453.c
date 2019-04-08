/* Note:Your choice is C IDE */
void main()
{
	int i,n,a[11]={0},b[11]={0};
	float n1=0,n2=0,n3=0;
    scanf("%d",&n);
    if(getchar()==10);
    for(i=1;i<=n;i++)scanf("%d",&b[i]);
    if(getchar()==10);
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    if(getchar()==10);
    for(i=1;i<=n;i++)
    {
    	if(a[i]<60)a[i]=0;
    	else if(a[i]<=63)a[i]=10;
    	else if(a[i]<=67)a[i]=15;
    	else if(a[i]<=71)a[i]=20;
    	else if(a[i]<=74)a[i]=23;
    	else if(a[i]<=77)a[i]=27;
    	else if(a[i]<=81)a[i]=30;
        else if(a[i]<=84)a[i]=33;
        else if(a[i]<=89)a[i]=37;
    	else if(a[i]<=100)a[i]=40;
    }
    for(i=1;i<=n;i++)n1=n1+a[i]*b[i];
    for(i=1;i<=n;i++)n2=n2+b[i];
    n3=n1/10/n2;
    printf("%.2f\n",n3);
}