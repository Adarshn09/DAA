students<-data.frame(
Name=c("abhi","asha","ravi","vihal","charan"),
Age=c(22,20,24,26,28),
Marks=c(88,89,98,78,84),
Department=c("IT","CS","EC","IT","CS")
)

print("orginal data frames")
print(students)

print("marks row:")
print(students$Marks)

print("values in col 2 abd row 3:")
print(students[2,3])

print("subset:name and marks:")
print(students[,c("Name","Marks")])

print("number of students in IT departments:")
print(subset(students,Department=="IT"))

students$Marks[students$Name=="abhi"]<-80

students$result<-ifelse(students$Marks >= 80,"pass","fail")

print("modified data frame:")
print(students)

mean_mark<-mean(students$Marks)
print(paste("Average marks:",mean_mark))

dept_count<-table(students$Department)
print("number of students per department:")
print(dept_count)

max_mark<-max(students$Marks)
print(paste("maximum marks:",max_mark))

print("Summary of data frames:")
print(summary(students))

colnames(students<-data.frame(
Name<-c("abhi","asha","ravi","vihal","charan"),
Age<-c(22,20,24,26,28),
Marks<-c(88,89,98,78,84),
Department<-c("IT","CS","EC","IT","CS")
)

print("Orginal data frame:")
print(students)

print("marks row:")
print(students$Marks)

print("values in col 2 abd row 3:")
print(students[2,3])

print("subset:name and marks:")
print(students[,c("Name","Marks")])

print("number of students in IT departments:")
print(subset(students,Department=="IT"))

students$Marks[students$Name=="abhi"]<-80

students$result<-ifelse(students$Marks >= 80,"pass","fail")

print("modified data frame:")
print(students)

mean_mark<-mean(students$Marks)
print(paste("Average marks:",mean_mark))

dept_count<-table(students$Department)
print("number of students per department:")
print(dept_count)

max_mark<-max(students$Marks)
print(paste("maximum marks:",max_mark))

print("Summary of data frames:")
print(summary(students))


colnames(students<-data.frame(
Name<-c("abhi","asha","ravi","vihal","charan"),
Age<-c(22,20,24,26,28),
Marks<-c(88,89,98,78,84),
Department<-c("IT","CS","EC","IT","CS")
)

print("Orginal data frame:")
print(students)

print("marks row:")
print(students$Marks)

print("values in col 2 abd row 3:")
print(students[2,3])

print("subset:name and marks:")
print(students[,c("Name","Marks")])

print("number of students in IT departments:")
print(subset(students,Department=="IT"))

students$Marks[students$Name=="abhi"]<-80

students$result<-ifelse(students$Marks >= 80,"pass","fail")

print("modified data frame:")
print(students)

mean_mark<-mean(students$Marks)
print(paste("Average marks:",mean_mark))

dept_count<-table(students$Department)
print("number of students per department:")
print(dept_count)

max_mark<-max(students$Marks)
print(paste("maximum marks:",max_mark))

print("Summary of data frames:")
print(summary(students))

