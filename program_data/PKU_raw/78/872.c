
int main ()
{
	int a,b,c,d;
	for(a=10;a<=50;a+=10)
		for(b=10;b<=50;b+=10)
			for(c=10;c<=50;c+=10)
				for(d=10;d<=50;d+=10)
		           if(a+b==c+d && (a+d)>(b+c) && (a+c)<b)
					{
						int kg[4]={a,b,c,d};
				        char py[4]={'z','q','s','l'};
				        int t;
				        char k;
				        for (int j=0;j<3;j++)
				        	for (int i=0;i<3-j;i++)
				        	{
				               if (kg[i]<kg[i+1])
				              {
				        	     t=kg[i];
				        	     kg[i]=kg[i+1];
				        	     kg[i+1]=t;
				        	     k=py[i];
				                 py[i]=py[i+1];
				        	     py[i+1]=k;
				              }
				        	}

	                cout<<py[0]<<" "<<kg[0]<<endl;
	                cout<<py[1]<<" "<<kg[1]<<endl;
	                cout<<py[2]<<" "<<kg[2]<<endl;
	                cout<<py[3]<<" "<<kg[3]<<endl;
					}
	   return 0;
}