
int main (){ int i;
#pragma omp parallel for private(i)
for(i =0 ;i <10 ;i ++)
 printf ("Hello") ;

}
