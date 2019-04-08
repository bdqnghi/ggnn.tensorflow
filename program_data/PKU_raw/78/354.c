/*
 *????pro30.cpp
 *??????
 *?????2012-10-10
 *??????
 */



int main()
{
    int z,q,s,l,zz,qq,ss,ll;
    for (z=10;z<=50;z+=10) // ????
        for (q=10;q<=50;q+=10)
            for (s=10;s<=50;s+=10)
                for (l=10;l<=50;l+=10)
                    if (z+q==s+l && z+l>s+q && z+s<q) // ??
                    {
                        zz=(z<q)+(z<s)+(z<l); // ????
                        qq=(q<z)+(q<s)+(q<l);
                        ss=(s<z)+(s<q)+(s<l);
                        ll=(l<z)+(l<q)+(l<s);
                        if (zz==0) cout << "z " << z << endl;
                        if (qq==0) cout << "q " << q << endl;
                        if (ss==0) cout << "s " << s << endl;
                        if (ll==0) cout << "l " << l << endl;
                        if (zz==1) cout << "z " << z << endl;
                        if (qq==1) cout << "q " << q << endl;
                        if (ss==1) cout << "s " << s << endl;
                        if (ll==1) cout << "l " << l << endl;
                        if (zz==2) cout << "z " << z << endl;
                        if (qq==2) cout << "q " << q << endl;
                        if (ss==2) cout << "s " << s << endl;
                        if (ll==2) cout << "l " << l << endl;
                        if (zz==3) cout << "z " << z << endl;
                        if (qq==3) cout << "q " << q << endl;
                        if (ss==3) cout << "s " << s << endl;
                        if (ll==3) cout << "l " << l << endl;
                    }
    return 0;
}