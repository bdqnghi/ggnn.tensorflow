int main()
{
	int a=0,b=0,c=0,d=0,e=0;//??
	int A=0,B=0,C=0,D=0,E=0;//????
	for(a=1;a<=5;a++)
		for(b=1;b<=5;b++){
			if(a==b)continue;//??????????
			for(c=1;c<=5;c++){
				if(a==c||b==c)continue;
				for(d=1;d<=5;d++){
					if(a==d||b==d||c==d)continue;
					for(e=1;e<=5;e++){
						if(a==e||b==e||c==e||d==e||e==2||e==3)continue;
						A=0,B=0,C=0,D=0,E=0;//??????
						if(e==1)A=1;//????
						if(b==2)B=1;
						if(a==5)C=1;
						if(c!=1)D=1;
						if(d==1)E=1;
						if(((A==1&&(a==1||a==2))+(B==1&&(b==1||b==2))+(C==1&&(c==1||c==2))+(D==1&&(d==1||d==2))+(E==1&&(e==1||e==2)))==2&&(A+B+C+D+E)==2)
							cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
					}//??????????????????
				}
			}
		}

}

