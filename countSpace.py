name=input("Enter name: ")
k=0
with open(name,'r') as f:
    for line in f:
        words=line.split()
        for i in words:
            for letter in i:
                if(letter.isspace):
                    k=k+1
print("Occurrences of blank spaces:")
print(k)
