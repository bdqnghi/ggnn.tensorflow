
void main()
{
int n;
char c[1000];
int i,j;
int dd=1;
int len;
scanf("%d",&n);


for(i=0;i<n;i++)
{
	dd=1;
scanf("%s",c);
len=strlen(c);

if(c[0]!=95&&((c[0]<=64||c[0]>=123)||(c[0]<=96&&c[0]>=91)))
{dd=0;}
if((c[0]>64&&c[0]<91)||(c[0]>96&&c[0]<123))
{

for(j=1;j<len;j++)
{

if(c[j]!=95&&(c[j]<48||c[j]>57)&&((c[j]<=64||c[j]>=123)||(c[j]<=96&&c[j]>=91)))
{
dd=0;
break;
}

}


}

if(dd==1)
printf("yes\n");
else
printf("no\n");

}



}