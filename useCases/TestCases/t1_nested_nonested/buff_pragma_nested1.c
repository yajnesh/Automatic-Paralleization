
--1==

#pragma omp parallel for private(i)


--2==

#pragma omp parallel for private(i)


--3==

#pragma omp parallel for private(i)


--4==

#pragma omp parallel for private(j)


--5==

#pragma omp parallel for private(i)


--6==

#pragma omp parallel for private(j)


--7==

#pragma omp parallel for private(i)

