
--1==

#pragma omp parallel for private(i)


--2==

#pragma omp parallel for private(i)


--3==

#pragma omp parallel for private(i)


--5==

#pragma omp parallel for private(i,j)


--7==

#pragma omp parallel for private(i,j)

