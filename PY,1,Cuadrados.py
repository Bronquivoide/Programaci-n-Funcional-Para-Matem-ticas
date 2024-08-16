n=int(input('Dame n'))
A=[i**2 for i in range(1,n+1)]
s=sum(A)
A.append(s)
print(A)
