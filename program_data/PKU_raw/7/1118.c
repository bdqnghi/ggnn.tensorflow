int main(int argc, char* argv[])
{
	char a[257],b[257],r[257];
    scanf("%s",b);
	scanf("%s",a);
	scanf("%s",r);
	int c,d,count,e;
	int j,h,y;
	c=strlen(a);
	d=strlen(b);
	e=strlen(r);


	for(j=0;j<d;j++)
	{
	   y=0;
		h=j;
		if(b[j]!=a[0])  continue;
		else 
		{	count=1;
			for(int t=1;t<c;t++)
			{   
			
				if(a[t]==b[j+t]) count++;
				
			}
		}
		if(count==c) {
			y=1;
			break;
		}
		if(y==1) break;
	
	}
	if(y==1){
			
	for(j=0;j<h;j++)
	printf("%c",b[j]);
	for(j=0;j<e;j++)
	printf("%c",r[j]);
	for(j=h+c;j<d;j++)
	printf("%c",b[j]);
	}
	else printf("%s",b);

	
	return 0;
}