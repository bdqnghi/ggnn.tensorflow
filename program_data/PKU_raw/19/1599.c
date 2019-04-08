/*
 * 1000012889_30.3.cpp
 *
 *  Created on: 2010-11-10
 *      Author: ???
 *        ??:????
 */



int main(){
	int k,i,j,r,h,l,m,n,p,q;
	char s[101],a[101],b[101],c[101];
	cin.getline(s,101);
	cin>>a>>b;
	k=strlen(s);
	i=strlen(a);
	j=strlen(b);
	for(r=0;r<=k-i+1;r++){
		for(h=r,l=0;h<r+i;h++,l++)
			if(s[h]!=a[l])
				break;
		if(l==i&&((r==0&&s[r+i]==' ')||(r>0&&s[r-1]==' '&&s[r+i]==' ')||(r+i==k&&s[r-1]==' '))){
			for(m=0,n=r+i;m<=k-r-i;m++,n++)
				c[m]=s[n];
			for(p=0,q=r;p<=j;p++,q++)
				s[q]=b[p];
			strcat(s,c);
			k=k-i+j;
			r=r+j;
		}
	}
	cout<<s<<endl;
	return 0;
}



