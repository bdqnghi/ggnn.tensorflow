void main()
{int i,r,n,x=0,z;
char a[102],b[102];
while(scanf("%c",&a[1])!=EOF)
{   i=1;
	while(a[i]!='\n')
    {   i++;
		scanf("%c",&a[i]);
    }
	for(n=1;n<=i-1;n++) printf("%c",a[n]);
	printf("\n");
	x=0;
    for(n=1;n<=i-1;n++)
		{
			b[n]=' ';
		    if(a[n]==')'&&x==0) b[n]='?'; 
			if(a[n]=='(') x=x+1;
			if(a[n]==')'&&x!=0) x=x-1;
		
		}
	x=0;
    for(n=i-1;n>=1;n--)
        {
            if(a[n]==')') x=x+1;
            if(a[n]=='('&&x==0) b[n]=36;
            if(a[n]=='('&&x!=0) x=x-1;


		}  
	for(z=1;z<=i-1;z++)printf("%c",b[z]);printf("\n");
    for(r=1;r<=i;r++)
	{b[r]='\0';}
}
}