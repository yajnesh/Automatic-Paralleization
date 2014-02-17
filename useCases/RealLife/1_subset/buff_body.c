
--1==
for(x =1 ; x <size ; x ++)
{
    k =x ;
    l =0 ;
    while (k !=0)
    {
        if (k &1)
        {
            ans [x] [l] =1 ;
        }
        k >>=1 ;
        l ++ ;
    }
    delay () ;
}


--2==
for(k =0 ; k <MAX ; k ++)
{
    if (k %2)
    {
        sum +=i *j *9.77 ;
    }
    else
    {
        sum -=i /( j +1) *7.99 ;
    }

}


--3==
for(j =0 ; j <MAX ; j ++)
    for(k =0 ; k <MAX ; k ++)
    {
        if (k %2)
        {
            sum +=i *j *9.77 ;
        }
        else
        {
            sum -=i /( j +1) *7.99 ;
        }

    }


--4==
for(i =0 ; i <MAX ; i ++)
    for(j =0 ; j <MAX ; j ++)
        for(k =0 ; k <MAX ; k ++)
        {
            if (k %2)
            {
                sum +=i *j *9.77 ;
            }
            else
            {
                sum -=i /( j +1) *7.99 ;
            }

        }

