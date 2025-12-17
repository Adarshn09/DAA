def main():
    pwd=input("Enter the passsword")
    if valid_pass(pwd):
        print("Valid password")
    else:
        print("not a valid password")

def valid_pass(pwd):
    spchr="@#$%"
    le=len(pwd)>=8
    ucase=any(chr.isupper() for chr in pwd)
    lcase=any(chr.islower() for chr in pwd)   
    digit=any(chr.isdigit() for chr in pwd)   
    sp=any(chr in spchr for chr in pwd)   
    if all([le,ucase,lcase,digit,sp]):
        return True
    else:
        return False

if __name__=="__main__":
    main()    
    
         