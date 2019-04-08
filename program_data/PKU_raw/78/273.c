int main()
{
    int z,q,s,l;
    for(z=10;z<=50;z+=10)
    for(q=10;q<=50;q+=10)
    for(s=10;s<=50;s+=10)
    for(l=10;l<=50;l+=10)
    {
        if((z+q == s+l)&&(z+l>s+q)&&(z+s<q))
        {
            if(z<s)
            {
                printf("l %d\nq %d\ns %d\nz %d",l,q,s,z);

            }
            else
            printf("l %d\nq %d\nz %d\ns %d",l,q,z,s);
        }

    }
    return 0;
}
