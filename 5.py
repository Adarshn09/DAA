def ceasear(text,shift,mode='encrypt'):
    result=""
    if mode=='decrypt':
        shift=-shift
    for ch in text:
        if ch.isalpha():
            base=ord('A') if ch.isupper() else ord('a')
            result+=chr((ord(ch)-base+shift)%26+base)
        else:
            result+=ch
    return result

plain_text="hello world"
print("original text:",plain_text)
shift=2
encrypted=ceasear(plain_text,shift)
print("encrypted text:",encrypted)
decrypted=ceasear(encrypted,shift,'decrypt')
print("decrypted text is:",decrypted)                 