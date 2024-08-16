n=int(input('Dame n'))
S=[k**2 + 2*k**3 + k**4 for k in range(1,n+1)]
s=sum(S)
print('La suma es',s)
