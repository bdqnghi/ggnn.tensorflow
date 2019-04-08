int main(){
	int i,s,k,f;
	int v=1;
	int j=0;
	char e='a';
	int cd;
	int o;
	int sum;
	char x[2];
	char zf[300];
	char z[300]="";
	gets(zf);
	o=strlen(zf);
	for(i=0;i<=o-1;i++)
	{
		if(  ((zf[i]>='a')&&(zf[i]<='z'))  ||  (   (zf[i]>='A')  &&  (zf[i]<='Z')  )   )
		{
			z[j]=zf[i];
			j++;
		}

		
		
	}
	if(j==0)
	{
		printf("No");
	}
	// printf("%s",z);
	cd=strlen(z);
	
	for(k=0;k<=cd-2;k++)
	{
		for(i=0;i<=cd-2-k;i++)
		{
			if(z[i]>z[i+1])
			{
				e=z[i];
				z[i]=z[i+1];
				
				z[i+1]=e;
			}
		}
		
	}
//	printf("%s",z);
	for(s=0;s<cd;s++)
	{
		if( ( (s==0)||(z[s]!=z[s-1]) )  && (z[s]!=z[s+1])  )
		{
			printf("%c=%d",z[s],v);
			printf("\n");
		}
		if( (  (s==0) || (z[s]!=z[s-1])  )    &&  (z[s]==z[s+1])  )
		{
			sum=0;
			for(f=s+1;f<cd;f++)
			{
				if(z[f]!=z[f+1])
				{
					break;
				}
				
				
			
			}
	         sum=f-s+1;
			printf("%c=%d",z[s],sum);
			printf("\n");
		}
	} 
	return 0;
}

