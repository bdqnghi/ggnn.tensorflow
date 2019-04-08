int main()
{
	char a[100],b[100];
	int i,j=0,k,x,s;
	for(i=0;i<100;i++)
	  {a[i]=0;b[i]='0';}
	scanf("%s",a);
	for(i=0;a[i]!=0;i++)
	  x=i+1;
	for(i=x;i<100;i++)
	  a[i]='0';
	while(j<x-1)
	  {s=0;
	   while(a[j]>'0')
	    {if(a[j+1]-3>='0')
	      {a[j+1]=a[j+1]-3;a[j]=a[j]-1;s++;}
	     else if(a[j]>='2')
	      {a[j+1]=a[j+1]-3+10;a[j]=a[j]-2;s++;}
	     else
	       {a[j]='0';a[j+1]=a[j+1]+10;}
	    }
	   b[j]=s+'0';
	   j=j+1;
	  }
	if(b[0]=='0'&&b[1]=='0')
	  printf("0");
	else if(b[0]!='0')
	  printf("%c",b[0]);
	for(i=1;i<x-1;i++)
	  printf("%c",b[i]);
	printf("\n");
	printf("%d",a[x-1]-'0');
}
