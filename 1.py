import random
import string
def genrate_password(length=8):
 chrs=string.ascii_letters+string.digits+string.punctuation
 pwd=''.join(random.choice(chrs) for i in range(length))
 return pwd

defults=genrate_password()
print("Defult password:",defults)
custom=genrate_password(12)
print("custom password:",custom)
