#magnitude
x<-c(1,2,3,4,5,6)
magintude<-sqrt(sum(x^2))
print(magintude)

#dot matrix
y<-c(5,6,7,8,9,10)
dot_matrix<-sum(x*y)
print(dot_matrix)

#transpose
A<-matrix(c(1,2,3,4,5,6),nrow=2,ncol=3)
A_transpose<-t(A)
print(A_transpose)

#inverse
B<-matrix(c(1,2,3,4),nrow=2,ncol=2)
B_inverse<-solve(B)
print(B_inverse)

#dterminents
A_derteminents<-det(B)
print(A_derteminents)

#trace
A_trace<-sum(diag(A))
print(A_trace)