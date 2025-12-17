def decrypt(text,shift):
    result=""
    for ch in text:
        if ch.isalpha():
           base=ord('A') if ch.isupper() else ord('a')
           result+=chr((ord(ch)-base-shift)%26+base)
        else:
            result+=ch
    return result

def ceasrar_cypher(cypher_text):
    print("cseasear cypher text decryption:")
    for key in range(1,27):
        print(f"key:{key:02d}:{decrypt(cypher_text,key)}")
        
cypher_text="hello world"
ceasrar_cypher(cypher_text)                    
        