#vector
my_vect<-c(1,2,3,4,5,6)
my_char<-c("a","b","c","d","e")

#Acess vector
print(my_vect[1])
print(my_char[2])


#List
my_list<-list(my_vect,my_char,list(1,2,3))
#access
print(my_list[1])
print(my_list[[2]][3])

#matrix
my_matrix<-matrix(c(1,2,3,4,5,6),nrow=2,ncol=3)
print(my_matrix[1,2])

#data frames
my_datafr<-data.frame(x<-c(1,2,3,4,5),y<-c("a","b","c","d","e"))
print(my_datafr$x[1])
print(my_datafr$y[2])

#factor
myfact<-factor(my_char)
print(levels(myfact))

