int main()
{
	char a[200],b[100],c[100];
	int i,j,k,lena,lenb,lenc,flag;
	for(i=0;i<100;i++)
		a[i]=0;
	gets(a);                     //???????? 
	gets(b);
	gets(c);
	lena=strlen(a);             //?????????
	lenb=strlen(b);
	lenc=strlen(c);

	for(i=0;i<=lena-lenb;i++)   //??????a???b?????
	if(a[i]==b[0]&&a[i-1]==' '&&a[i+lenb]==' '||i==0&&a[i+lenb]==' '||i==lena-lenb&&a[i-1]==' '){
		flag=1;
		for(j=0;j<lenb;j++)
		{
			if(a[i+j]!=b[j])
			{flag=0;break;}
		}
		if(flag==1)
		{
            if(lenb>lenc)     //????????
			{
				for(k=i,j=0;k<i+lenc,j<lenc;k++,j++) //?????
				{a[k]=c[j];}
		        for(k=i+lenc;k<lena;k++)     //?????????
				{a[k]=a[k+lenb-1];}
				i+=lenb;
				lena-=lenb-lenc;
			}
	    	else     //????????
			{
		    	for(k=lena-1+lenc-lenb;k>=i+lenb;k--)  //??????????
				{a[k]=a[k-lenc+lenb];}
		    	for(k=i,j=0;k<i+lenc,j<lenc;k++,j++)  //??????
				{a[k]=c[j];}
				i+=lenc;                   
				lena+=lenc-lenb;              //??????
			}
		}
	}
	cout<<a<<endl;
	return 0;
}