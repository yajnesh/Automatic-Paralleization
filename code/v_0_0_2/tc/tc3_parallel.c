
int main (){ int i ,j;
#pragma omp parallel for private(i)
for(i =0 ;i <10 ;i ++)
 ;

 
#pragma omp parallel for private(j)
for(j =0 ;j <20 ;j ++)
 printf ("Hello") ;

}
