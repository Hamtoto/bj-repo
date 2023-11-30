arc1 = int(input())
arc2 = int(input())
arc3 = int(input())

if arc1 + arc2 + arc3 == 180:
    if arc1 == arc2 == arc3 == 60:
        print("Equilateral")
    elif arc1 == arc2 or arc2 == arc3 or arc1 == arc3:
        print("Isosceles")
    else:
        print("Scalene")
else:
    print("Error")