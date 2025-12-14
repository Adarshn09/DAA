data<-data.frame(
Hours_study=c(2,4,6,8,10),
attendence=c(60,70,75,85,95),
marks=c(88,89,86,85,95)
)

model<-lm(marks~Hours_study+attendence,data=data)
summary(model)

new_data<-data.frame(Hours_study=7,attendence=80)
pred<-predict(model,new_data)
cat("predicted marks is:",pred)
