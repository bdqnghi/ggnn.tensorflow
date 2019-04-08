void main()
{
 char a[20],b[20];int i,j,c,d;
 scanf("%s%s",a,b);
 c=strlen(a);d=strlen(b);
 if(c!=d)printf("NO");
 else {
for(i=0;a[i]!=0;i++)
 {for(j=0;b[j]!=0;j++)
	   if(a[i]==b[j])
		 { b[j]='0';break;}
	   if(b[j]==0)
	   {printf("NO");break;break;}
 }
 printf("YES");}
}

 	 

