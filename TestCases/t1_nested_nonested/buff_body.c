
--1==
for(i =0 ; i <N ; i ++)
{
    a [i] =i *1.5 ;
    b [i] =i +22.35 ;
    c [i] =d [i] =0.0 ;
}


--2==
for(i =0 ; i <N ; i ++)
    c [i] =a [i] +b [i] ;

--3==
for(i =0 ; i <N ; i ++)
    d [i] =a [i] *b [i] ;

--4==
for(j =i ; j <N ; j ++)
    d [j] =a [j] *b [j] ;

--5==
for(i =0 ; i <N ; i ++)
    for(j =i ; j <N ; j ++)
        d [j] =a [j] *b [j] ;

--6==
for(j =0 ; j <MAX ; j ++)
{
    a [i] =i *j ;
}


--7==
for(i =0 ; i <MAX ; i ++)
{
    for(j =0 ; j <MAX ; j ++)
    {
        a [i] =i *j ;
    }

}

