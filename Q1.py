#1. Write a program to print the sum of the following series 1 + 1/2 + 1/3 +. …. + 1/n
def Series(n):
    sum=0
    for i in range(1,n+1):
        sum_series=sum+1/i
        sum=sum+sum_series
    return sum_series


n=5
result=round(Series(n),5)
print(result)



