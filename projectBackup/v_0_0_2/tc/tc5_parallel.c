
int main (){ int i ,j ,k =0;
#pragma omp parallel for private(j,i)
for(i =0 ,k =5 ;i <10 ;i ++)
 { j =5 ; for(j =0 ;j <20 ;j ++)
  { k ++ ; printf ("Hello") ;}}

}
