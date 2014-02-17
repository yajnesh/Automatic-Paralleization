
--1==
for(i =0 ; i <N ; i ++)
    a [i] =rand () %LIM ;

--2==
for(i =0 ; i <N ; i ++)
{
    sum =sum +a [i] ;
    delay () ;
}


--3==
for(k =0 ; k <MAX ; k ++)
    if (k %2)
    {
        sum +=i *j *9.77 ;
    }
    else
    {
        sum -=i /( j +1) *7.99 ;
    }


--4==
for(j =0 ; j <MAX ; j ++)
    for(k =0 ; k <MAX ; k ++)
        if (k %2)
        {
            sum +=i *j *9.77 ;
        }
        else
        {
            sum -=i /( j +1) *7.99 ;
        }


--5==
for(i =0 ; i <MAX ; i ++)
    for(j =0 ; j <MAX ; j ++)
        for(k =0 ; k <MAX ; k ++)
            if (k %2)
            {
                sum +=i *j *9.77 ;
            }
            else
            {
                sum -=i /( j +1) *7.99 ;
            }

