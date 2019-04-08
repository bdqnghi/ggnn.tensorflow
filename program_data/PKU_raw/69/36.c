int main()
{
	int i,k,p=0,lena,lenb,a[250],b[250],c[250];
	char s[250],t[250],temp[250];
	
		for(i=0;i<250;i++){
			a[i]=0;b[i]=0;c[i]=0;
		}
		
		scanf("%s%s",s,t);
		lena=strlen(s);
		lenb=strlen(t);
		if(lena<lenb){
			strcpy(temp,s);
			strcpy(s,t);
			strcpy(t,temp);
		}
		lena=strlen(s);
		lenb=strlen(t);
		for(i=lena-1;i>=0;i--)
			a[lena-1-i]=s[i]-48;
		for(i=lenb-1;i>=0;i--)
			b[lenb-1-i]=t[i]-48;
		for(i=0;i<=lena;i++){
			if(a[i]+b[i]>=10){
				c[i]+=a[i]+b[i]-10;
				a[i+1]++;
			}
			else c[i]+=a[i]+b[i];
		}
		
		for(k=i-1;k>=0;k--){
			if(c[k]!=0&&p==0)
				p=1;
			if(p==1)
				printf("%d",c[k]);
		}
		if(p==0) printf("0");
		printf("\n");
		return 0;
}