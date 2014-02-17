
int main (){ int i ,j ,k =0;
#pragma omp parallel for private(i)
for(i =0 ;i <10 ;i ++)
 { j =5 ; 
#pragma omp parallel for private(j)
for(j =0 ;j <20 ;j ++)
  { k ++ ; printf ("Hello") ;}}

}
