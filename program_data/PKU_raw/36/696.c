void move(char a[])
{   char t;
     int l,i,j;
	 l=strlen(a);
	 for(i=0;i<l;i++)
	 for(j=i+1;j<l;j++)
	 {if(a[j]+'0'<a[i]+'0')
	 {t=a[j];
	 a[j]=a[i];
	 a[i]=t;}
	 }
}
void main()
{
	char a[10],b[10];
	scanf("%s %s",a,b);
	move(a);
	move(b);
	if(strcmp(a,b)==0)printf("YES");
	else printf("NO");
}


  