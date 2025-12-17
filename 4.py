import itertools
CH="ab"
LEN=2
total=0
for length in range(1,LEN+1):
    for combo in itertools.product(CH,repeat=length):
        pwd=''.join(combo)
        print(pwd)
        total+=1

print("Total combination is:",total)
        