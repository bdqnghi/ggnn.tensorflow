main()
{char a[200]={'\0'},b[200]={'\0'};
int time,r,i,s,t,u;
scanf("%d",&time);
for(r=1;r<=time;r++)
{
    scanf("%s\n%s",a,b);
	t=strlen(b);
	u=strlen(a);
    for(i=t-1;i>=0;i--)
		b[i+u-t]=b[i];
    for(i=0;i<u-t;i++)
		b[i]='0';
    for(i=u-1;i>=0;i--)
    {if(a[i]>=b[i])a[i]=a[i]-b[i]+'0';
     else {a[i]=a[i]-b[i]+'0'+10;a[i-1]--;}
    }
    s=0;
    for(i=0;i<u;i++)
    {if(a[i]=='0')s++;
     else break;}
    for(i=s;i<u;i++)
        printf("%c",a[i]);
printf("\n");
}
}
