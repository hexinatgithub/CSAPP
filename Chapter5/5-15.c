/*
A:
%xmm0	
|
|		mul
add<----|	
|
|
%xmm0

B:
float CPE is 3

C:
int CPE is 1

D:
因为流水乘法并不需要依赖加法的结果，所以处理器可以使全部的乘法单元进行处理，那么产出CPE就是1，满管道运行
那么限制运行表现的就是float加法运算了，所以为3.
*/