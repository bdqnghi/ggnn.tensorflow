void main()
{char str1[200],str2[200];
int zhe1[200],zhe2[200];
memset(zhe1,0,sizeof(zhe1));
memset(zhe2,0,sizeof(zhe2));
int cases;
scanf("%d",&cases);
while(cases>0)
{   int n1,n2,i,j,k;
	scanf("%s%s",str1,str2);
	n1=strlen(str1);n2=strlen(str2);
	for(i=0;i<n1;i++)
		zhe1[i]=str1[i]-'0';
	for(i=0;i<n1;i++)
		zhe2[i]=str2[i]-'0';
for(j=n1-1,k=n2-1;j>=0,k>=0;j--,k--)
{if(zhe1[j]>=zhe2[k]) zhe1[j]-=zhe2[k];
else { zhe1[j]=10+zhe1[j]-zhe2[k];
zhe1[j-1]--;}
}
for(i=0;i<n1;i++)
{if(zhe1[i]!=0) break;}
for(j=i;j<n1;j++) printf("%d",zhe1[j]);
printf("\n");
cases--;
}
}
