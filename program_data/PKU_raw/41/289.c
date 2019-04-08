int main()
{int a,b,c,d,e,sa,sb,sc,sd,se;
for(a=1;a<=5;a++)
{for(b=1;b<=5;b++)
 {if(b==a)
	 continue;
    for(c=1;c<=5;c++)
      {if(c==a||c==b)                   //????
	continue;
 for(d=1;d<=5;d++)
 {if(d==a||d==b||d==c)
	 continue;
 for(e=1;e<=5;e++)
 {if(e==a||e==b||e==c||e==d||e==2||e==3)
 continue;
 sa=(e==1);sb=(b==2);sc=(a==5);sd=(c!=1);se=(d==1);  //?????
if(a<=2&&b<=2&&(sa+sb==2)&&(sa+sb+sc+sd+se==2))    //????????
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(a<=2&&c<=2&&(sa+sc==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(a<=2&&d<=2&&(sa+sd==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(a<=2&&e<=2&&(sa+se==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(b<=2&&c<=2&&(sc+sb==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(d<=2&&b<=2&&(sd+sb==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(e<=2&&b<=2&&(se+sb==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(c<=2&&d<=2&&(sc+sd==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(e<=2&&c<=2&&(sc+se==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}
if(e<=2&&d<=2&&(se+sd==2)&&(sa+sb+sc+sd+se==2))
{ cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;}}}}}}
return 0;}
