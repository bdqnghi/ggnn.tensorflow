
int main()
{char c1[80],c2[80];
gets(c1);
gets(c2);
int i,j=0;

for (i=0;i<=80;i++)
{if (c1[i]>='a'&&c1[i]<='z')  c1[i]=c1[i]-32;}
for (i=0;i<=80;i++)
{if (c2[i]>='a'&&c2[i]<='z')  c2[i]=c2[i]-32;}

if (strcmp(c1,c2)>0) printf(">");
if (strcmp(c1,c2)<0) printf("<");
if (strcmp(c1,c2)==0) printf("=");



    }
