add_numbers<-function(x=1,y=2){
result<-x+y

if(result%%2==0){
even<-TRUE
}
else{
even<-FALSE
}
return(list(
x=x,
y=y,
sum=result,
is_even=even
))
}
results<-list(
add_numbers(),
add_numbers(3,4),
add_numbers(6,8)
)

for(res in results)
{
cat("\n--Result--\n")
cat("x:",res$x,"\n")
cat("y:",res$y,"\n")
cat("sum:",res$sum,"\n")
cat("is even:",res$is_even,"\n")
}
