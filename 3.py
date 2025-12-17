import hashlib
def hash_pass(pwd):
    sha256=hashlib.sha256()
    sha256.update(pwd.encode('utf-8'))
    hashpwd=sha256.hexdigest()
    return hashpwd

pwd="mypasssword123"
print("orginal password:",pwd)
hashed=hash_pass(pwd)
print("hashed password:",hashed)