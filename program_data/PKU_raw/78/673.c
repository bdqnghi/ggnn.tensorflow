int main(){
	int z,q,s,l;
	for(z=1;z<=5;z++){
		for(q=1;q<=5;q++){
			for(s=1;s<=5;s++){
				for(l=1;l<=5;l++){
					if(z+q==s+l&&z+l>s+q&&z+s<q&&z!=q&&z!=s&&z!=l&&q!=s&&q!=l&&s!=l)//????????
					{
						int a[5],t,m;
						char c[5],tc;
						a[1]=z;a[2]=q;a[3]=s;a[4]=l;
						c[1]='z';c[2]='q';c[3]='s';c[4]='l';
						for(int i=1;i<=4;i++){
							m=i;
							for (int j=i+1;j<=4;j++) if(a[j]>a[m]) m=j;
							t=a[i];a[i]=a[m];a[m]=t;
							tc=c[i];c[i]=c[m];c[m]=tc;
							cout<<c[i]<<" "<<a[i]*10<<endl;      //?????
						}



					}
				}
			}

		}
	}

 return 0;

}
