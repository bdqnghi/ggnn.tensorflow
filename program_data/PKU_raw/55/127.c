int ston(char x[],int y,int);
void ntos(char x[],int y,int z);
void main()
{
		char in[100]="\0",out[100]="\0";
		int i,d,exp1,exp2,l;
		
		scanf("%d %s %d",&exp1,in,&exp2);
		l=strlen(in);
		for(i=0;i<l;i++)
                      if(in[i]<='z'&&in[i]>='a')in[i]=in[i]+'A'-'a';
		
		d=ston(in,exp1,l);
		ntos(out,exp2,d);
		for (i=0;i<=strlen(out)-1;i++)
		{
				if(out[i]>=10+'0')out[i]=out[i]+'A'-10-'0';
		}
		puts(out);
}
int ston(char x[],int y,int l)
{
	int z=0;
	int i;
	for(i=0;i<l;i++)
			{
					if(*(x+i)<='Z'&&*(x+i)>='A')x[i]=x[i]-'A'+10;
					else *(x+i)=*(x+i)-'0';
			}
	for(i=1;i<=l;i++)
	{	
			
			z=z*y+x[i-1];
	}
	return(z);
}
void ntos(char x[],int y,int z)
{
		if(z<y)x[0]=z+'0';
		else
		{
				ntos(x,y,z/y);
				x[strlen(x)]=z%y+'0';
		}
}